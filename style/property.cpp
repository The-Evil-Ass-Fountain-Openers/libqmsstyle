#include "property.h"
#include "visualenumsmap.h"
#include "../util.h"

#include <QApplication>

#include <QtLogging>

namespace Style
{

PropertyHeader::PropertyHeader(qint32 name, qint32 type)
{
    nameID = name;
    typeID = type;

    switch (static_cast<IDENTIFIER>(type))
    {
    case IDENTIFIER::DIBDATA:
        break;
    case IDENTIFIER::GLYPHDIBDATA:
        break;
    case IDENTIFIER::ENUM:
        sizeInBytes = 0x4;
        break;
    case IDENTIFIER::STRING:
        // dynamic !!
        break;
    case IDENTIFIER::INT:
        sizeInBytes = 0x4;
        break;
    case IDENTIFIER::BOOLTYPE:
        sizeInBytes = 0x4;
        break;
    case IDENTIFIER::COLOR:
        sizeInBytes = 0x4;
        break;
    case IDENTIFIER::MARGINS:
        sizeInBytes = 0x10;
        break;
    case IDENTIFIER::FILENAME:
        sizeInBytes = 0x10;
        break;
    case IDENTIFIER::SIZE:
        sizeInBytes = 0x4;
        break;
    case IDENTIFIER::POSITION:
        sizeInBytes = 0x8;
        break;
    case IDENTIFIER::RECTTYPE:
        sizeInBytes = 0x10;
        break;
    case IDENTIFIER::FONT:
        sizeInBytes = 0x5C;
        break;
    case IDENTIFIER::INTLIST:
        // dynamic !!
        break;
    case IDENTIFIER::HBITMAP:
        break;
    case IDENTIFIER::DISKSTREAM:
        break;
    case IDENTIFIER::STREAM:
        break;
    case IDENTIFIER::BITMAPREF:
        break;
    case IDENTIFIER::FLOAT:
        break;
    case IDENTIFIER::HIGHCONTRASTCOLORTYPE:
        sizeInBytes = 0x4;
        break;
    default:
        break;
    }

    if (!isValid())
    {
        qFatal() << "libqmsstyle<" + qApp->applicationName() + ">: nameID/typeID mismatch in property object. Style object is invalid.";
        return;
    }
}

PropertyHeader::PropertyHeader(QByteArray data, int start)
{
    nameID = 	  util::byteArrToInt(data, start + 0);
    typeID =      util::byteArrToInt(data, start + 4);
    classID =     util::byteArrToInt(data, start + 8);
    partID =      util::byteArrToInt(data, start + 12);
    stateID =     util::byteArrToInt(data, start + 16);
    shortFlag =   util::byteArrToInt(data, start + 20);
    reserved = 	  util::byteArrToInt(data, start + 24);
    sizeInBytes = util::byteArrToInt(data, start + 28);
}

PropertyHeader::PropertyHeader(const PropertyHeader &object)
{
    nameID = object.nameID;
    typeID = object.typeID;
    classID = object.classID;
    partID = object.partID;
    stateID = object.stateID;
    shortFlag = object.shortFlag;
    reserved = object.reserved;
    sizeInBytes = object.sizeInBytes;
}

bool PropertyHeader::isValid()
{
    // First attempt was 255, but yielded false-positives.
    // Smaller than 200 eliminates typeID & prop nameID ids.
    if(partID < 0 ||
       partID > 199)
        return false;

    if(stateID < 0 ||
       stateID > 199)
        return false;

    // Not a known class
    if(classID < 0 ||
       classID > 500)
        return false;

    if(typeID < static_cast<int>(IDENTIFIER::ENUM) ||
       typeID >= static_cast<int>(IDENTIFIER::COLORSCHEMES))
        return false;

    // Some color and font props use an type id as name id.
    // They seem to contain valid data, so ill include them.
    if(nameID == static_cast<int>(IDENTIFIER::COLOR) &&
       typeID == static_cast<int>(IDENTIFIER::COLOR))
        return true;
    if(nameID == static_cast<int>(IDENTIFIER::FONT) &&
       typeID == static_cast<int>(IDENTIFIER::FONT))
        return true;
    if(nameID == static_cast<int>(IDENTIFIER::DISKSTREAM) &&
       typeID == static_cast<int>(IDENTIFIER::DISKSTREAM))
        return true;
    if(nameID == static_cast<int>(IDENTIFIER::STREAM) &&
       typeID == static_cast<int>(IDENTIFIER::STREAM))
        return true;

    // space for unknown props
    if(nameID < static_cast<int>(IDENTIFIER::COLORSCHEMES) ||
       nameID > 25000)
        return false;

    return true;
}


Property::Property(IDENTIFIER nameID, IDENTIFIER typeID)
    : header(static_cast<qint32>(nameID), static_cast<qint32>(typeID))
{
    name = NAMES.key(header.nameID);
    setDefaultValues();
}
Property::Property(const PropertyHeader &headerObject)
    : header(headerObject)
{
    name = NAMES.key(header.nameID);
    setDefaultValues();
}

void Property::setDefaultValues()
{
    switch (static_cast<IDENTIFIER>(header.typeID))
    {
    case IDENTIFIER::INTLIST:
        setValue(QList<qint32>());
        break;
    case IDENTIFIER::COLORLIST:
        setValue(QList<QColor>());
        break;
    case IDENTIFIER::STRING:
        setValue(QString(""));
        break;
    case IDENTIFIER::FILENAME:
    case IDENTIFIER::FILENAME_LITE:
    case IDENTIFIER::DISKSTREAM:
    case IDENTIFIER::FONT:
        setValue(qint32());
        break;
    case IDENTIFIER::INT:
    case IDENTIFIER::SIZE:
    case IDENTIFIER::ENUM:
    case IDENTIFIER::HIGHCONTRASTCOLORTYPE:
        setValue(qint32());
        break;
    case IDENTIFIER::BOOLTYPE:
        setValue(bool());
        break;
    case IDENTIFIER::COLOR:
        setValue(QColor());
        break;
    case IDENTIFIER::POSITION:
        setValue(QSize());
        break;
    case IDENTIFIER::RECTTYPE:
    case IDENTIFIER::MARGINS:
        setValue(QVariant::fromValue(QMargins(0,0,0,0)));
        break;
    default:
        m_value = QVariant();
        break;
    }
}

QString Property::valueString() const
{
    switch (static_cast<IDENTIFIER>(header.typeID))
    {
    case IDENTIFIER::INTLIST:
    {
        QList<qint32> l = value().value<QList<qint32>>();
        if (l.length() <= 0) return "Len: " + QString::number(l.length());
        if (l.length() == 1) return "Len: " + QString::number(l.length()) + ", Values: " + QString::number(l[0]);
        if (l.length() == 2) return "Len: " + QString::number(l.length()) + ", Values: " + QString::number(l[0]) + ", " + QString::number(l[1]);
        if (l.length() == 3) return "Len: " + QString::number(l.length()) + ", Values: " + QString::number(l[0]) + ", " + QString::number(l[1]) + ", " + QString::number(l[2]);
        else return "Len: " + QString::number(l.length()) + ", Values: " + QString::number(l[0]) + ", " + QString::number(l[1]) + ", " + QString::number(l[2]) + ", ...";
    }
    case IDENTIFIER::COLORLIST:
        return "no";
    case IDENTIFIER::STRING:
        return value().toString();
    case IDENTIFIER::FILENAME:
    case IDENTIFIER::FILENAME_LITE:
    case IDENTIFIER::DISKSTREAM:
        return value().toString();
    case IDENTIFIER::FONT:
        return value().toString(); // TODO: need style ref. here to print the actual font name
    case IDENTIFIER::INT:
    case IDENTIFIER::SIZE:
        return value().toString();
    case IDENTIFIER::ENUM:
    case IDENTIFIER::HIGHCONTRASTCOLORTYPE:
    {
        int index = value().toInt();
        QList<VisualEnum> list = VisualEnumsMap::find(header.nameID);
        if(list.isEmpty())
        {
            return "Empty";
        }

        if (index >= list.length())
        {
            return QString::number(index) + " (out of range)";
        }

        return list[index].name;
    }
    case IDENTIFIER::BOOLTYPE:
        return value().toBool() ? "true" : "false";
    case IDENTIFIER::COLOR:
    {
        auto color = value().value<QColor>();
        return QString::number(color.red()) + ", " + QString::number(color.green()) + ", " + QString::number(color.blue());
    }
    case IDENTIFIER::POSITION:
    {
        auto position = value().toSize();
        return QString::number(position.width()) + "x" + QString::number(position.height());
    }
    case IDENTIFIER::RECTTYPE:
    case IDENTIFIER::MARGINS:
    {
        auto margins = value().value<QMargins>();
        return QString::number(margins.left()) + ", " + QString::number(margins.right()) + ", " + QString::number(margins.top()) + ", " + QString::number(margins.bottom());
    }
    default:
        return "Unsupported";
    }
}

void Property::setValue(QVariant variant)
{
    m_value = variant;
}

void Property::setValue(QString string)
{
    header.sizeInBytes = (string.length() + 1) * 2;
    m_value = QVariant(string);
}

void Property::setValue(QList<qint32> int32List)
{
    if (int32List.length() > 0)
    {
        header.sizeInBytes = int32List.length() * 4 + 4; // 4 byte array length
    }
    else
    {
        header.sizeInBytes = 0; // empty lists dont even have the count
    }
    m_value = QVariant::fromValue(int32List);
}

void Property::setValue(QList<QColor> colorList)
{
    header.sizeInBytes = colorList.length() * 4;
    m_value = QVariant::fromValue(colorList);
}

void Property::setValue(int i)
{
    switch (static_cast<IDENTIFIER>(header.typeID))
    {
    case IDENTIFIER::FILENAME:
    case IDENTIFIER::FILENAME_LITE:
    case IDENTIFIER::DISKSTREAM:
    case IDENTIFIER::FONT:
    {
        m_value = i;
        header.shortFlag = i;
        break;
    }
    default:
    {
        m_value = i;
        break;
    }
    }
}

bool Property::isImage() const
{
    switch (static_cast<IDENTIFIER>(header.typeID))
    {
    case IDENTIFIER::FILENAME:
    case IDENTIFIER::FILENAME_LITE:
    case IDENTIFIER::DISKSTREAM:
        return true;
    default: return false;
    }
}

}
