#ifndef PROPERTY_H
#define PROPERTY_H

#include "definitions.h"

#include <cstdint>
#include <algorithm>

#include <QVariant>

namespace Style
{

class PropertyHeader
{
public:
    PropertyHeader(qint32 name, qint32 type);
    PropertyHeader(QByteArray data, int start);
    PropertyHeader(const PropertyHeader &object);

    qint32 nameID;       // Offset: 0, Size: 4,	ID for the property name, described in MSDN
    qint32 typeID;       // Offset: 4, Size: 4,	ID for the type of the property, described in MSDN
    qint32 classID;      // Offset: 8, Size: 4,	Index to the class from CMAP the propery belongs to
    qint32 partID;       // Offset: 12, Size: 4	ID for the part of the class the property belongs to
    qint32 stateID;      // Offset: 16, Size: 4	ID for the state map
    qint32 shortFlag;    // Offset: 20, Size: 4	If not 0, ignore 'sizeInBytes' as no data follows. Instead this field may contain data.
    qint32 reserved;     // Offset: 24, Size: 4	Seems to be always zero
    qint32 sizeInBytes;  // Offset: 28, Size: 4	The size of the data that follows. Does not include padding

    bool isValid();

    bool operator==(const PropertyHeader &object)
    {
        return object.classID == classID &&
               object.nameID == nameID &&
               object.partID == partID &&
               object.reserved == reserved &&
               object.shortFlag == shortFlag &&
               object.sizeInBytes == sizeInBytes &&
               object.stateID == stateID &&
               object.typeID == typeID;
    }
};

class Property
{
public:
    Property(IDENTIFIER name, IDENTIFIER type);
    Property(const PropertyHeader &headerObject);

    PropertyHeader header;

    QVariant value();
    template <typename T> T valueAs();
    QString valueString();

    void setValue(QVariant variant);
    void setValue(QString string);
    void setValue(QList<qint32> int32List);
    void setValue(QList<QColor> colorList);
    void setValue(int i);

    bool isImage();

private:
    void setDefaultValues();

    QVariant m_value;
};

}

#endif // PROPERTY_H
