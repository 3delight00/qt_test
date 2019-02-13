#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "viewform.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QOpenGLWidget>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

}

void MainWindow::on_actionOpen_stl_file_triggered()
{
    QString filter = "All file (*.*) ;; Stl File (*.stl)";
    QString file_name = QFileDialog::getOpenFileName(this, "Open",QDir::homePath(),filter);
}


void MainWindow::on_pushButton_View_clicked()
{
    ViewForm *viewform = new ViewForm(this);
    viewform->move(90, 55);
    viewform->show();


}
