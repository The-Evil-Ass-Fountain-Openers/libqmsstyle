#include "styleclass.h"

#include <QApplication>

StyleClass::StyleClass(QString className, QObject *parent)
    : QObject{parent}
{
    if(className == "") {
        qFatal() << "libqmsstyle<" + qApp->applicationName() + ">: cannot construct StyleClass with an empty class.";
        return;
    }

    m_className = className;
}

#include "moc_styleclass.cpp"
