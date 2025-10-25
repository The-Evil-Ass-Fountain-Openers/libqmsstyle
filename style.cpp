#include "style.h"

#include <QFileInfo>
#include <QByteArrayView>
#include <QApplication>
#include <QRegularExpression>

#include <QtLogging>

Style::Style(const QString &name, const QUrl &path)
    : QObject{nullptr}
{
    m_name = name;
    emit nameChanged();

    m_path = path;
    emit pathChanged();

    m_styleDir = QDir(path.toString());

    if(!m_styleDir.exists()) {
        qFatal() << "libqmsstyle<" + qApp->applicationName() + ">: extracted msstyle path does not exist. Style object is invalid.";

        m_invalid = true;
        emit invalidChanged();

        return;
    }

    m_filesPrefix = m_name + "_";
}

bool Style::load()
{
    if(m_invalid) {
        qWarning() << "libqmsstyle<" + qApp->applicationName() + ">: attempted to load an invalid Style object.";
        return false;
    }

    // read CMAP (class map)
    {
        QFile classmap(m_styleDir.absoluteFilePath(m_filesPrefix + "CMAP_CMAP"));

        if(!classmap.exists()) {
            qFatal() << "libqmsstyle<" + qApp->applicationName() + ">: CMAP file does not exist. Style object is invalid.";

            m_invalid = true;
            emit invalidChanged();

            return false;
        }

        if(classmap.open(QIODevice::ReadOnly)) {
            QString decoded_classmap(QString(classmap.readAll()).replace('\u0000', ""));

            // hopefully in every vista+ msstyle these class names remain the same, otherwise, this is f*cked
            decoded_classmap.replace("documentation",            "documentation ");
            decoded_classmap.replace("sizevariant.NormalSize",   "sizevariant.NormalSize ");
            decoded_classmap.replace("sizevariant.Default",      "sizevariant.Default ");
            decoded_classmap.replace("colorvariant.NormalColor", "colorvariant.NormalColor ");
            decoded_classmap.replace("globals",                  "globals ");
            decoded_classmap.replace("sysmetrics",               "sysmetrics ");

            decoded_classmap.replace("Style", "Style ");
            decoded_classmap.replace("::", " ");

            QStringList classes = decoded_classmap.split(' ');

            {
                bool dwmpenExists = false;
                bool dwmtouchExists = false;
                bool w8_taskbandExists = false;
                bool querybuilderExists = false;
                bool darkmode_taskmanagerExists = false;

                for(int i = 0; i < classes.length(); i++) {
                    // class is a reserved keyword in C++
                    QString classID = classes[i];

                    w8_taskbandExists = classID == "W8::TaskBandExtendedUi";
                    querybuilderExists = classID == "QueryBuilder";
                    dwmpenExists = classID == "DWMPen";
                    dwmtouchExists = classID == "DWMTouch";
                    darkmode_taskmanagerExists = classID == "DarkMode::TaskManager";

                    StyleClass *classObject = new StyleClass(classID);
                    m_classes.push_front(classObject);
                    emit classAdded(classObject);
                }

                // get the msstyle windows version with the classes we found
                if(darkmode_taskmanagerExists) m_version = Style::Windows11;
                else if(dwmpenExists || dwmtouchExists) m_version = Style::Windows10;
                else if(w8_taskbandExists) m_version = Style::Windows8;
                else if(querybuilderExists) m_version = Style::WindowsVista;
                else m_version = Style::Windows7;

                emit versionChanged(m_version);
            }

        } else {
            qFatal() << "libqmsstyle<" + qApp->applicationName() + ">: could not open CMAP file. Style object is invalid.";

            m_invalid = true;
            emit invalidChanged();

            return false;
        }
    }

    return true;
}

#include "moc_style.cpp"
