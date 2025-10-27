#include "propertystream.h"
#include "../util.h"

#include <QMargins>
#include <QColor>
#include <QSize>

namespace Style
{

Property PropertyStream::readNextProperty(QByteArray data, int &start)
{
    int cursor = start;

    PropertyHeader header(data, cursor);

    while(!header.isValid())
    {
        cursor++;
        header = PropertyHeader(data, cursor);
    }

    if(cursor - start > 4)
    {
        start = cursor;
        return Property(static_cast<IDENTIFIER>(2), static_cast<IDENTIFIER>(2));
    }

    cursor += 32; // sizeof PropertyHeader

    Property prop(header);

    switch(static_cast<IDENTIFIER>(header.typeID))
    {
    case IDENTIFIER::INTLIST:
    {
        QList<qint32> list{};

        int numInts = 0;

        if(header.sizeInBytes != 0)
        {
            numInts = util::byteArrToInt(data, cursor);
            cursor += sizeof(qint32);
        }

        for(int i = 0; i < numInts; ++i)
        {
            list.append(util::byteArrToInt(data, cursor));
            cursor += sizeof(qint32);
        }

        prop.setValue(list);
        break;
    }
    case IDENTIFIER::COLORLIST: // TODO: add support for colors
    {
        break;
    }
    case IDENTIFIER::STRING:
    {
        int numChars = header.sizeInBytes / 2;
        QString text = "";

        for(int i = 0; i < numChars - 1; ++i) // dont need the NULL term.
        {
            char c = data[i];
            cursor += 2;
            text += c;
        }
        cursor += 2; // still need to account for the NULL term.
        prop.setValue(text);
        break;
    }
    // 32 byte property, (header carries data)
    case IDENTIFIER::FILENAME:
    case IDENTIFIER::FILENAME_LITE:
    case IDENTIFIER::DISKSTREAM:
    case IDENTIFIER::FONT:
    {
        prop.setValue(header.shortFlag);
        break;
    }
    // 40 byte property (32 byte header + 4 byte int + 4 byte padding)
    case IDENTIFIER::INT:
    case IDENTIFIER::SIZE:
    case IDENTIFIER::ENUM:
    case IDENTIFIER::HIGHCONTRASTCOLORTYPE:
    {
        if(header.shortFlag == 0)
        {
            prop.setValue(util::byteArrToInt(data, cursor));
            cursor += 8;
        }
        else prop.setValue(0);
        break;
    }
    // 40 byte property, (32 byte header + 4 byte bool + 4 byte padding)
    case IDENTIFIER::BOOLTYPE:
    {
        if(header.shortFlag == 0)
        {
            prop.setValue(util::byteArrToInt(data, cursor) != 0);
            cursor += 8;
        }
        else prop.setValue(false);
        break;
    }
    // 40 byte property, (32 byte header + 4 byte color type + 4 byte padding)
    case IDENTIFIER::COLOR:
    {
        if(header.shortFlag == 0)
        {
            int colorref = util::byteArrToInt(data, cursor);
            int r = (colorref >> 0) & 0xFF;
            int g = (colorref >> 8) & 0xFF;
            int b = (colorref >> 16) & 0xFF;
            prop.setValue(QColor::fromRgb(r, g, b));
            cursor += 8;
        }
        else prop.setValue(QColor::fromRgb(0, 0, 0));
        break;
    }
    // 40 byte property, (32 byte header + 8 byte position type)
    case IDENTIFIER::POSITION:
    {
        if(header.shortFlag == 0)
        {
            int x = util::byteArrToInt(data, cursor);
            cursor += 4;
            int y = util::byteArrToInt(data, cursor);
            cursor += 4;
            prop.setValue(QSize(x, y));
        }
        else prop.setValue(QSize(0, 0));
        break;
    }
    // 48 byte property, (32 byte header + 12 byte rect type)
    case IDENTIFIER::RECTTYPE:
    {
        if(header.shortFlag == 0)
        {
            // struct RECT format is LTRB (windef.h)
            int l = util::byteArrToInt(data, cursor);
            cursor += 4;
            int t = util::byteArrToInt(data, cursor);
            cursor += 4;
            int r = util::byteArrToInt(data, cursor);
            cursor += 4;
            int b = util::byteArrToInt(data, cursor);
            cursor += 4;
            prop.setValue(QVariant::fromValue(QMargins(t, b, l, r)));
        }
        else prop.setValue(QVariant::fromValue(QMargins(0, 0, 0, 0)));
        break;
    }
    case IDENTIFIER::MARGINS:
    {
        // struct MARGINS format is LRTB (uxtheme.h)
        if(header.shortFlag == 0)
        {
            int l = util::byteArrToInt(data, cursor);
            cursor += 4;
            int r = util::byteArrToInt(data, cursor);
            cursor += 4;
            int t = util::byteArrToInt(data, cursor);
            cursor += 4;
            int b = util::byteArrToInt(data, cursor);
            cursor += 4;
            prop.setValue(QVariant::fromValue(QMargins(t, b, l, r)));
        }
        else prop.setValue(QVariant::fromValue(QMargins(0, 0, 0, 0)));
        break;
    }
    default:
    {
        break;
    }
    }

    start = cursor;
    return prop;
}


}
