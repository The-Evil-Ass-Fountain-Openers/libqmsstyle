#include "class.h"

#include <QApplication>

namespace Style
{

Class::Class(int id, QString name)
{
    if(name == "")
    {
        qFatal() << "libqmsstyle<" + qApp->applicationName() + ">: cannot construct StyleClass with an empty class name.";
        return;
    }

    className = name;
    classID = id;
}

}
