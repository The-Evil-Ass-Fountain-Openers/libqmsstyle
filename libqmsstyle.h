#ifndef LIBQMSSTYLE_H
#define LIBQMSSTYLE_H

#include <QObject>
#include <QProcess>

#include "libqmsstyle_global.h"

#include "style/style.h"

class LIBQMSSTYLE_EXPORT LibQmsstyle : public QObject
{
    Q_OBJECT

public:
    LibQmsstyle();

    Style::Style *loadMsstyles(const QString &path);
    Style::Style *loadedStyle() { return m_loadedMsstyles; }

signals:
    void msstylesLoaded(Style::Style *loadedStyle);

private:
    Style::Style *m_loadedMsstyles = nullptr;
};

#endif // LIBQMSSTYLE_H
