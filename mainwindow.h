#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "viewform.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_actionOpen_stl_file_triggered();

    void on_pushButton_View_clicked();

private:
    Ui::MainWindow *ui;
    ViewForm *viewform;
};

#endif // MAINWINDOW_H
