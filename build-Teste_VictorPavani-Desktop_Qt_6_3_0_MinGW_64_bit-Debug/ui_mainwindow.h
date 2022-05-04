/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionPan_X_e_Y;
    QAction *actionPan_X_e_Y_2;
    QAction *actionRota_o;
    QAction *actionBrilho_Contraste;
    QAction *actionNova;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QMenuBar *menubar;
    QMenu *menuZoom_Escala;
    QMenu *menuAdicionar_Imagem;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(884, 450);
        actionPan_X_e_Y = new QAction(MainWindow);
        actionPan_X_e_Y->setObjectName(QString::fromUtf8("actionPan_X_e_Y"));
        actionPan_X_e_Y_2 = new QAction(MainWindow);
        actionPan_X_e_Y_2->setObjectName(QString::fromUtf8("actionPan_X_e_Y_2"));
        actionRota_o = new QAction(MainWindow);
        actionRota_o->setObjectName(QString::fromUtf8("actionRota_o"));
        actionBrilho_Contraste = new QAction(MainWindow);
        actionBrilho_Contraste->setObjectName(QString::fromUtf8("actionBrilho_Contraste"));
        actionNova = new QAction(MainWindow);
        actionNova->setObjectName(QString::fromUtf8("actionNova"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, -1, 0, -1);
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 882, 387));
        verticalLayoutWidget = new QWidget(scrollAreaWidgetContents_2);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 881, 381));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        scrollArea->setWidget(scrollAreaWidgetContents_2);

        horizontalLayout->addWidget(scrollArea);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 884, 22));
        menuZoom_Escala = new QMenu(menubar);
        menuZoom_Escala->setObjectName(QString::fromUtf8("menuZoom_Escala"));
        menuAdicionar_Imagem = new QMenu(menubar);
        menuAdicionar_Imagem->setObjectName(QString::fromUtf8("menuAdicionar_Imagem"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuZoom_Escala->menuAction());
        menubar->addAction(menuAdicionar_Imagem->menuAction());
        menuZoom_Escala->addAction(actionPan_X_e_Y);
        menuZoom_Escala->addAction(actionPan_X_e_Y_2);
        menuZoom_Escala->addAction(actionRota_o);
        menuZoom_Escala->addAction(actionBrilho_Contraste);
        menuAdicionar_Imagem->addAction(actionNova);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionPan_X_e_Y->setText(QCoreApplication::translate("MainWindow", "Pan (X e Y)", nullptr));
        actionPan_X_e_Y_2->setText(QCoreApplication::translate("MainWindow", "Zoom (Escala)", nullptr));
        actionRota_o->setText(QCoreApplication::translate("MainWindow", "Rota\303\247\303\243o", nullptr));
        actionBrilho_Contraste->setText(QCoreApplication::translate("MainWindow", "Brilho/Contraste", nullptr));
        actionNova->setText(QCoreApplication::translate("MainWindow", "Nova", nullptr));
        menuZoom_Escala->setTitle(QCoreApplication::translate("MainWindow", "Modificar Imagens", nullptr));
        menuAdicionar_Imagem->setTitle(QCoreApplication::translate("MainWindow", "Adicionar Imagem", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
