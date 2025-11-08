#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "../style/property.h"
#include "../style/class.h"
#include "../style/style.h"

#include <QDir>
#include <QFile>
#include <QFileInfo>
#include <QMenuBar>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setWindowTitle("libqmsstyle testing application");
    this->setWindowIcon(QIcon::fromTheme("folder"));

    QObject::connect(ui->currentClass, &QComboBox::currentIndexChanged, this, &MainWindow::refreshParts);
    QObject::connect(ui->currentPart, &QComboBox::currentIndexChanged, this, &MainWindow::refreshStates);
    QObject::connect(ui->currentState, &QComboBox::currentIndexChanged, this, &MainWindow::refreshProperties);
    QObject::connect(ui->currentProperty, &QComboBox::currentIndexChanged, this, &MainWindow::refreshProperty);

    QObject::connect(ui->menuBar, &QMenuBar::triggered, this, &MainWindow::actionTriggered);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete m_msstyleParser;
    delete m_fileDlg;
}

// there's not gonna be any other actions soooo
void MainWindow::actionTriggered(QAction *action)
{
    if(!m_fileDlg) {
        m_fileDlg = new QFileDialog(nullptr, "Open an msstyles file", QDir::homePath(), "Windows msstyles files (*.msstyles)");
        QObject::connect(m_fileDlg, &QFileDialog::fileSelected, this, &MainWindow::readMsstyles);
    }

    m_fileDlg->open();
}

void MainWindow::readMsstyles(const QString &file) {
    if(!m_msstyleParser) {
        m_msstyleParser = new LibQmsstyle;

        QObject::connect(m_msstyleParser, &LibQmsstyle::msstylesLoaded, this, [=](Style::Style *loadedStyle) {
            switch(loadedStyle->version()) {
            case Style::Style::WindowsXP:
                ui->statusBar->showMessage("Version: Windows XP");
                break;
            case Style::Style::WindowsVista:
                ui->statusBar->showMessage("Version: Windows Vista");
                break;
            case Style::Style::Windows7:
                ui->statusBar->showMessage("Version: Windows 7");
                break;
            case Style::Style::Windows8:
                ui->statusBar->showMessage("Version: Windows 8/8.1");
                break;
            case Style::Style::Windows10:
                ui->statusBar->showMessage("Version: Windows 10");
                break;
            case Style::Style::Windows11:
                ui->statusBar->showMessage("Version: Windows 11");
                break;
            }

            ui->currentClass->clear();

            for(Style::Class classObject : loadedStyle->classes())
                ui->currentClass->addItem(classObject.className);
        });
    }

    m_msstyleParser->loadMsstyles(file);
}

void MainWindow::refreshParts(int index) {
    ui->currentPart->clear();
    if(m_msstyleParser && index >= 0) {
        const Style::Class *currentClass = &m_msstyleParser->loadedStyle()->classes().at(index);

        for(const Style::Part &partObject : currentClass->parts)
            ui->currentPart->addItem(QString::number(partObject.id) + " - " + partObject.name);
    }
}

void MainWindow::refreshStates(int index) {
    ui->currentState->clear();
    if(m_msstyleParser && index >= 0) {
        const Style::Class *currentClass = &m_msstyleParser->loadedStyle()->classes().at(ui->currentClass->currentIndex());
        const Style::Part *currentPart = &currentClass->parts.at(index);

        for(const Style::State &stateObject : currentPart->states)
            ui->currentState->addItem(QString::number(stateObject.id) + " - " + stateObject.name);
    }
}

void MainWindow::refreshProperties(int index) {
    ui->currentProperty->clear();
    if(m_msstyleParser && index >= 0) {
        const Style::Class *currentClass = &m_msstyleParser->loadedStyle()->classes().at(ui->currentClass->currentIndex());
        const Style::Part *currentPart = &currentClass->parts.at(ui->currentPart->currentIndex());
        const Style::State *currentState = &currentPart->states.at(index);

        for(const Style::Property &propertyObject : currentState->properties)
            ui->currentProperty->addItem(propertyObject.name);
    }
}

// this sucks
void MainWindow::refreshProperty(int index) {
    if(m_msstyleParser && index >= 0) {
        Style::Style *currentStyle = m_msstyleParser->loadedStyle();
        const Style::Class *currentClass = &currentStyle->classes().at(ui->currentClass->currentIndex());
        const Style::Part *currentPart = &currentClass->parts.at(ui->currentPart->currentIndex());
        const Style::State *currentState = &currentPart->states.at(ui->currentState->currentIndex());
        const Style::Property *currentProperty = &currentState->properties.at(ui->currentProperty->currentIndex());

        if(currentProperty->isImage()) ui->imagefile->setPixmap(currentProperty->imagefile);
        ui->propertyvalue->setText(currentProperty->valueString());
    }
}

#include "moc_mainwindow.cpp"
