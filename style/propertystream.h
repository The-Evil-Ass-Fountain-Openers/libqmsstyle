#ifndef PROPERTYSTREAM_H
#define PROPERTYSTREAM_H

#include "property.h"

#include <QObject>

namespace Style
{

class PropertyStream
{
public:
    static Property readNextProperty(QByteArray data, int &start);
};

}

#endif // PROPERTYSTREAM_H
