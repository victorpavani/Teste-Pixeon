/********************************************************************************
** Form generated from reading UI file 'pan.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAN_H
#define UI_PAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Pan
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *valorX;
    QLineEdit *valorY;
    QPushButton *pushButton;

    void setupUi(QDialog *Pan)
    {
        if (Pan->objectName().isEmpty())
            Pan->setObjectName(QString::fromUtf8("Pan"));
        Pan->resize(367, 172);
        label = new QLabel(Pan);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 61, 21));
        label_2 = new QLabel(Pan);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 50, 61, 21));
        valorX = new QLineEdit(Pan);
        valorX->setObjectName(QString::fromUtf8("valorX"));
        valorX->setGeometry(QRect(70, 10, 61, 22));
        valorY = new QLineEdit(Pan);
        valorY->setObjectName(QString::fromUtf8("valorY"));
        valorY->setGeometry(QRect(70, 50, 61, 22));
        pushButton = new QPushButton(Pan);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(200, 140, 75, 24));

        retranslateUi(Pan);

        QMetaObject::connectSlotsByName(Pan);
    } // setupUi

    void retranslateUi(QDialog *Pan)
    {
        Pan->setWindowTitle(QCoreApplication::translate("Pan", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Pan", "Valor de X", nullptr));
        label_2->setText(QCoreApplication::translate("Pan", "Valor de Y", nullptr));
        pushButton->setText(QCoreApplication::translate("Pan", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pan: public Ui_Pan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAN_H
