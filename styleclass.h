#ifndef STYLECLASS_H
#define STYLECLASS_H

#include <QObject>

class StyleClass : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString className READ className WRITE setClassName NOTIFY classNameChanged)

public:
    explicit StyleClass(QString className, QObject *parent = nullptr);

    QString className();


signals:
    void classNameChanged();
    void cmapIndexChanged();

private:
    QString m_className;
};

#endif // STYLECLASS_H
