#include "libqmsstyle.h"

#include <QApplication>

#include <QDir>
#include <QProcess>
#include <QFileInfo>

LibQmsstyle::LibQmsstyle()
    : QObject{nullptr}
{}

Style::Style *LibQmsstyle::loadMsstyles(const QString &path)
{
    QStringList splitPath(path.split("/"));
    Style::Style *style = new Style::Style(splitPath[splitPath.length() - 1], path);
    if(!style->invalid())
    {
        Style::Style *previousStyle = m_loadedMsstyles;

        // TODO: put all this debug stuff in a separate class or something idk
        qDebug() << "libqmsstyle<" + qApp->applicationName() + ">: Style object for " + path + " was created succesfully.";
        style->load();
        m_loadedMsstyles = style;
        emit msstylesLoaded(style);

        delete previousStyle;
    }

    return style;
}

#include "moc_libqmsstyle.cpp"
