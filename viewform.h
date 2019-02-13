#ifndef VIEWFORM_H
#define VIEWFORM_H

#include <QWidget>

namespace Ui {
class ViewForm;
}

class ViewForm : public QWidget
{
    Q_OBJECT

public:
    explicit ViewForm(QWidget *parent = nullptr);
    ~ViewForm();

private:
    Ui::ViewForm *ui;
};

#endif // VIEWFORM_H
