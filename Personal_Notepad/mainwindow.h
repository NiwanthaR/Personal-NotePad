#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPrintDialog>

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionRedo_triggered();

    void on_actionUndo_triggered();

    void on_actionCut_triggered();

    void on_actionPaste_triggered();

    void on_actionCopy_triggered();

    void on_actionExit_triggered();

    void on_actionNew_triggered();

    void on_actionSave_As_triggered();

    void on_actionSave_sa_triggered();

private:
    Ui::MainWindow *ui;
    QString currentFile = "";
};

#endif // MAINWINDOW_H
