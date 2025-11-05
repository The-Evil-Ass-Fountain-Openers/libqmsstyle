#ifndef STYLE_H
#define STYLE_H

#include <QObject>
#include <QDir>
#include <QUrl>
#include <QHash>

#include "class.h"

namespace Style
{

class Style : public QObject
{
    Q_OBJECT

    Q_PROPERTY(bool invalid READ invalid NOTIFY invalidChanged)

    Q_PROPERTY(QString name READ name NOTIFY nameChanged)
    Q_PROPERTY(QUrl path READ path NOTIFY pathChanged)
    Q_PROPERTY(QDir dir READ dir NOTIFY dirChanged)
    Q_PROPERTY(Version version READ version NOTIFY versionChanged)

    Q_PROPERTY(QList<Class> classes READ classes NOTIFY classAdded)

public:
    enum Version
    {
        WindowsXP,
        WindowsVista,
        Windows7,
        Windows8,
        Windows10,
        Windows11
    };

    explicit Style(const QString &name, const QUrl &path);

    bool invalid() { return m_invalid; }

    QString name() { return m_name; }
    QUrl path() { return m_path; }
    QDir dir() { return m_dir; }
    Version version() { return m_version; }

    QList<Class> classes() { return m_classes; }

    QByteArray removeNull(const QByteArray &bytes, const int &start, const int &end);
    Version getVersion();

    bool load();

signals:
    void loaded();

    void invalidChanged();

    void nameChanged(QString name);
    void pathChanged(QUrl path);
    void dirChanged(QDir dir);
    void versionChanged(Style::Version version);

    void classAdded(Class *addedClass);

private:
    bool m_invalid = false;

    QString m_name;
    QUrl m_path;
    Version m_version;

    QList<Class> m_classes;

    QString m_filesPrefix;
    QDir m_dir;
};

}

#endif // STYLE_H
