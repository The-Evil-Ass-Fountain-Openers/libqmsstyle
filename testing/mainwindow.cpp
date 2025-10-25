#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "../libqmsstyle.h"

#include <QFileInfo>
#include <QDir>
#include <QFile>

#include <stdexcept>
#include <string>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QObject::connect(ui->readMsstyle, &QPushButton::clicked, this, &MainWindow::readMsstyle_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::readMsstyle_clicked()
{
    LibQmsstyle *msstyleParser = new LibQmsstyle;

    msstyleParser->loadMsstyle(QUrl(ui->msstylePath->text()));
}


