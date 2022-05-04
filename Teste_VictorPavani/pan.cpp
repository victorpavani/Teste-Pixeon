#include "pan.h"
#include "ui_pan.h"
#include <QMessageBox>
#include <QImage>

Pan::Pan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Pan)
{
    ui->setupUi(this);
}

Pan::~Pan()
{
    delete ui;
}


void Pan::on_pushButton_clicked()
{

}

