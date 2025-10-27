#include "libqmsstyle.h"

#include <QApplication>

#include <QDir>
#include <QProcess>
#include <QFileInfo>

LibQmsstyle::LibQmsstyle()
    : QObject{nullptr}
{}

bool LibQmsstyle::loadMsstyle(const QUrl &path)
{
    QFileInfo file(path.toString());

    if(!(file.exists() && file.isFile())) return false;

    QDir tmp("/tmp/");

    tmp.mkdir("libqmsstyle-" + file.baseName());
    tmp.cd("libqmsstyle-" + file.baseName());

    QStringList args;
    args.push_front("-x");
    args.push_front("--all");
    args.push_front("--raw");
    args.push_front("--output=" + tmp.absolutePath());
    args.push_front(file.absoluteFilePath());

    m_process = new QProcess();

    QObject::connect(m_process, &QProcess::finished, this, [=]()
    {
        Style::Style *style = new Style::Style(file.fileName(), QUrl(tmp.absolutePath()));
        if(!style->invalid())
        {
            qDebug() << "libqmsstyle<" + qApp->applicationName() + ">: Style object for " + file.absoluteFilePath() + " was created succesfully.";

            style->load();

            this->m_loadedMsstyles.push_back(style);
            this->msstyleLoaded(style);
        }
    });

    m_process->start("wrestool", args);
    m_process->waitForStarted();

    return true;
}

#include "moc_libqmsstyle.cpp"
