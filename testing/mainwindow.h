#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "../libqmsstyle.h"

#include <QMainWindow>

#include <QAction>
#include <QProcess>
#include <QFileDialog>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void actionTriggered(QAction *action);
    void readMsstyles(const QString &file);

    void refreshParts(int index);
    void refreshStates(int index);
    void refreshProperties(int index);
    void refreshProperty(int index);

private:
    Ui::MainWindow *ui;

    LibQmsstyle *m_msstyleParser = nullptr;
    QFileDialog *m_fileDlg = nullptr;
};
#endif // MAINWINDOW_H
