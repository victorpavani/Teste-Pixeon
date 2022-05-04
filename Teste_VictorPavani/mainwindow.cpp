#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QFileDialog>
#include <QFile>
#include <QFormLayout>
#include <QHBoxLayout>
#include <QLineEdit>
#include <QLabel>
#include "pan.h"

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


}


void MainWindow::on_pushButton_2_clicked()
{
}


void MainWindow::on_actionPan_X_e_Y_triggered()
{

}


void MainWindow::on_actionNova_triggered()
{
    QLabel *label = new QLabel();
    ui->verticalLayout_2->addWidget(label);
    label->setFixedSize(300,300);
    QString filter="Imagens(*.PNG) ; (*.JPEG)";
    QString opened=QFileDialog::getOpenFileName(this, "Selecionar Imagem", "C://", filter);
    QImage img(opened);
    label->setPixmap(QPixmap::fromImage(img.scaled(300,300,Qt::KeepAspectRatio)));
}

