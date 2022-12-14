/********************************************************************************
** Form generated from reading UI file 'pagprincipal.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGPRINCIPAL_H
#define UI_PAGPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pagPrincipal
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QLCDNumber *lcdNumber_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_2;
    QLCDNumber *lcdNumber;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout;
    QLCDNumber *lcdNumber_4;
    QLCDNumber *lcdNumber_3;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton_4;
    QTableView *tableView;
    QPushButton *Registro;

    void setupUi(QDialog *pagPrincipal)
    {
        if (pagPrincipal->objectName().isEmpty())
            pagPrincipal->setObjectName(QString::fromUtf8("pagPrincipal"));
        pagPrincipal->resize(400, 300);
        verticalLayoutWidget = new QWidget(pagPrincipal);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 20, 101, 54));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        lcdNumber_2 = new QLCDNumber(verticalLayoutWidget);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));

        verticalLayout->addWidget(lcdNumber_2);

        verticalLayoutWidget_2 = new QWidget(pagPrincipal);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 90, 101, 54));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(verticalLayoutWidget_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);

        lcdNumber = new QLCDNumber(verticalLayoutWidget_2);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));

        verticalLayout_2->addWidget(lcdNumber);

        verticalLayoutWidget_3 = new QWidget(pagPrincipal);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(20, 190, 161, 83));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(verticalLayoutWidget_3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout_3->addWidget(pushButton_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lcdNumber_4 = new QLCDNumber(verticalLayoutWidget_3);
        lcdNumber_4->setObjectName(QString::fromUtf8("lcdNumber_4"));

        horizontalLayout->addWidget(lcdNumber_4);

        lcdNumber_3 = new QLCDNumber(verticalLayoutWidget_3);
        lcdNumber_3->setObjectName(QString::fromUtf8("lcdNumber_3"));

        horizontalLayout->addWidget(lcdNumber_3);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalLayoutWidget_4 = new QWidget(pagPrincipal);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(130, 20, 160, 141));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton_4 = new QPushButton(verticalLayoutWidget_4);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout_4->addWidget(pushButton_4);

        tableView = new QTableView(verticalLayoutWidget_4);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout_4->addWidget(tableView);

        Registro = new QPushButton(pagPrincipal);
        Registro->setObjectName(QString::fromUtf8("Registro"));
        Registro->setGeometry(QRect(220, 240, 171, 31));

        retranslateUi(pagPrincipal);

        QMetaObject::connectSlotsByName(pagPrincipal);
    } // setupUi

    void retranslateUi(QDialog *pagPrincipal)
    {
        pagPrincipal->setWindowTitle(QCoreApplication::translate("pagPrincipal", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("pagPrincipal", "Valor Max", nullptr));
        pushButton_2->setText(QCoreApplication::translate("pagPrincipal", "Valor Min", nullptr));
        pushButton_3->setText(QCoreApplication::translate("pagPrincipal", "Referencia/Tolerancia", nullptr));
        pushButton_4->setText(QCoreApplication::translate("pagPrincipal", "Valores Actuales ", nullptr));
        Registro->setText(QCoreApplication::translate("pagPrincipal", "Registros Anteriores", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pagPrincipal: public Ui_pagPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGPRINCIPAL_H
