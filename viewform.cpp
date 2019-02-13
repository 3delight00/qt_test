#include "viewform.h"
#include "ui_viewform.h"

ViewForm::ViewForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ViewForm)
{
    ui->setupUi(this);
}

ViewForm::~ViewForm()
{
    delete ui;
}
