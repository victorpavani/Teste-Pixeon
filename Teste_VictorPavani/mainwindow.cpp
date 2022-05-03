#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QFileDialog>
#include <QFile>

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
    QString filter="Imagens(*.JPG) ; (*.PNG) ; (*.BMP) ; (*.JPEG)";
    QString opened=QFileDialog::getOpenFileName(this, "Selecionar Imagem", "C://", filter);
    QImage img(opened);
    ui ->label-> setPixmap(QPixmap::fromImage(img.scaled(600,600,Qt::KeepAspectRatio)));

}

