#include "style.h"

#include "visualpartsmap.h"
#include "propertystream.h"

#include <QFileInfo>
#include <QByteArrayView>
#include <QApplication>
#include <QRegularExpression>

#include <QtLogging>

namespace Style
{

Style::Style(const QString &name, const QUrl &path)
    : QObject{nullptr}
{
    m_name = name;
    emit nameChanged(m_name);

    m_path = path;
    emit pathChanged(m_path);

    m_dir = QDir(path.toString());
    emit dirChanged(m_dir);

    if(!m_dir.exists())
    {
        qFatal() << "libqmsstyle<" + qApp->applicationName() + ">: extracted msstyle path does not exist. Style object is invalid.";

        m_invalid = true;
        emit invalidChanged();

        return;
    }

    m_filesPrefix = m_name + "_";
}

QByteArray Style::removeNull(const QByteArray &bytes, const int &start, const int &end)
{
    QByteArray result;

    for(int i = 0; i < bytes.length(); i++)
    {
        char byte = bytes[i];
        if(byte == 0) continue;
        result.push_back(byte);
    }

    return result;
}

Style::Version Style::getVersion()
{
    bool foundDWMTouch = false;
    bool foundDWMPen = false;
    bool foundW8Taskband = false;
    bool foundVistaQueryBuilder = false;
    bool foundTaskBand2Light_Taskband2 = false;

    for(Class classObject : m_classes)
    {
        if(classObject.className == "DWMTouch")
        {
            foundDWMTouch = true;
            continue;
        }
        else if(classObject.className == "DWMPen")
        {
            foundDWMPen = true;
            continue;
        }
        else if(classObject.className == "W8::TaskbandExtendedUI")
        {
            foundW8Taskband = true;
            continue;
        }
        else if(classObject.className == "QueryBuilder")
        {
            foundVistaQueryBuilder = true;
            continue;
        }
        else if(classObject.className == "DarkMode::TaskManager")
        {
            foundTaskBand2Light_Taskband2 = true;
            continue;
        }
    }

    if (foundTaskBand2Light_Taskband2)
        return Version::Windows11;
    else if (foundW8Taskband)
        return Version::Windows8;
    else if (foundDWMTouch || foundDWMPen)
        return Version::Windows10;
    else if (foundVistaQueryBuilder)
        return Version::WindowsVista;
    else
        return Version::Windows7;
}

bool Style::load()
{
    if(m_invalid)
    {
        qWarning() << "libqmsstyle<" + qApp->applicationName() + ">: attempted to load an invalid Style object.";
        return false;
    }

    // read CMAP (class map)
    {
        QFile classmap(m_dir.absoluteFilePath(m_filesPrefix + "CMAP_CMAP"));

        if(!classmap.exists())
        {
            qFatal() << "libqmsstyle<" + qApp->applicationName() + ">: CMAP file does not exist. Style object is invalid.";

            m_invalid = true;
            emit invalidChanged();

            return false;
        }

        if(classmap.open(QIODevice::ReadOnly))
        {
            QByteArray classmap_array(classmap.readAll());

            int lastClass = 0;
            int foundClasses = 0;

            for(int i = 0; i < classmap_array.length(); i += 2)
            {
                if(classmap_array[i] == 0 && classmap_array[i + 1] == 0)
                {
                    if (i - lastClass > 2)
                    {
                        Class classObject(
                            foundClasses,
                            QString::fromUtf8(removeNull(classmap_array.sliced(lastClass, i - lastClass), lastClass, i))
                        );
                        m_classes.push_back(classObject);
                        emit classAdded(&classObject);
                        foundClasses++;
                    }
                    lastClass = i + 2;
                }
            }
        }
        else
        {
            qFatal() << "libqmsstyle<" + qApp->applicationName() + ">: could not open CMAP file. Style object is invalid.";

            m_invalid = true;
            emit invalidChanged();

            return false;
        }
    }

    // TODO: add support for amap later

    m_version = getVersion();
    emit versionChanged(m_version);

    // build property tree
    {
        for(Class &classObject : m_classes) {
            const QList<VisualPart> visualParts = VisualPartsMap::find(classObject.className, m_version);

            for(VisualPart visualPart : visualParts) {
                Part part{visualPart.id, visualPart.name};

                for(VisualState visualState : visualPart.states) {
                    State state{visualState.value, visualState.name};
                    part.states.append(state);
                }

                if(part.name == "PUSHBUTTONDROPDOWN") {
                    qDebug() << "hi";
                }

                classObject.parts.append(part);
            }
        }
    }

    // load properties
    {
        QFile propertiesmap(m_dir.absoluteFilePath(m_filesPrefix + "VARIANT_NORMAL"));

        if(!propertiesmap.exists()) {
            qFatal() << "libqmsstyle<" + qApp->applicationName() + ">: VARIANT_NORMAL file does not exist. Style object is invalid.";

            m_invalid = true;
            emit invalidChanged();

            return false;
        }

        if(propertiesmap.open(QIODevice::ReadOnly)) {
            QByteArray propertiesmap_array(propertiesmap.readAll());

            int cursor = 0;

            // TODO: holy fucking shit this is ass
            while(cursor < propertiesmap_array.length() - 4)
            {
                Property prop = PropertyStream::readNextProperty(propertiesmap_array, cursor);

                for(Class &classObject : m_classes) {
                    if(classObject.classID == prop.header.classID) {

                        for(Part &partObject : classObject.parts) {
                            if(partObject.id == prop.header.partID) {

                                for(State &stateObject : partObject.states) {
                                    if(stateObject.id == prop.header.stateID) {
                                        stateObject.properties.append(prop);
                                        break;
                                    }
                                }

                            }
                        }

                    }
                }
            }
        }
    }

    return true;
}

}

#include "moc_style.cpp"
