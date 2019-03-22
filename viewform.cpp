#include "viewform.h"
#include "ui_viewform.h"
#include "DarkStyle.h"

ViewForm::ViewForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ViewForm)
{
    ui->setupUi(this);
    this->hide();
    this->setStyle(new DarkStyle);
}

ViewForm::~ViewForm()
{
    delete ui;
}

void ViewForm::on_pushButton_Close_clicked()
{
    this->hide();
}
