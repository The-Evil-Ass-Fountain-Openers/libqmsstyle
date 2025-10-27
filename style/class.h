#ifndef CLASS_H
#define CLASS_H

#include "property.h"

#include <QObject>

namespace Style
{

struct State
{
    int id;
    QString name;
    QList<Property> properties;
};

struct Part
{
    int id;
    QString name;
    QList<State> states;
};

class Class
{
public:
    Class(int id, QString name);

    QString className;
    int classID;

    QList<Part> parts;
};

}

#endif // CLASS_H
