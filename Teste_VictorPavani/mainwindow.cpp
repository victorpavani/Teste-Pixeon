#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QFileDialog>
#include <QFile>
#include <QFormLayout>
#include <QHBoxLayout>
#include <QLineEdit>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow:: ~MainWindow(){
   delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QLabel *label = new QLabel();
    ui->horizontalLayout->addWidget(label);
    QString filter="Imagens(*.PNG) ; (*.JPEG)";
    QString opened=QFileDialog::getOpenFileName(this, "Selecionar Imagem", "C://", filter);
    QImage img(opened);
    label->setPixmap(QPixmap::fromImage(img.scaled(600,600,Qt::KeepAspectRatio)));

}


void MainWindow::on_pushButton_2_clicked()
{
}

