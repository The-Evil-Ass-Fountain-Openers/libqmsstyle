#ifndef LIBQMSSTYLE_H
#define LIBQMSSTYLE_H

#include <QObject>
#include <QProcess>

#include "libqmsstyle_global.h"

#include "style.h"

class LIBQMSSTYLE_EXPORT LibQmsstyle : QObject
{
    Q_OBJECT

public:
    explicit LibQmsstyle();

    bool loadMsstyle(const QUrl &path);

signals:
    void msstyleLoaded(Style *loadedStyle);

private:
    QList<Style *> m_loadedMsstyles;

    QProcess *m_process;
};

#endif // LIBQMSSTYLE_H
