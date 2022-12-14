/********************************************************************************
** Form generated from reading UI file 'registrodedatos.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRODEDATOS_H
#define UI_REGISTRODEDATOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_RegistroDeDatos
{
public:
    QTableView *tableView;
    QPushButton *pushButton;

    void setupUi(QDialog *RegistroDeDatos)
    {
        if (RegistroDeDatos->objectName().isEmpty())
            RegistroDeDatos->setObjectName(QString::fromUtf8("RegistroDeDatos"));
        RegistroDeDatos->resize(400, 300);
        tableView = new QTableView(RegistroDeDatos);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(70, 30, 256, 192));
        pushButton = new QPushButton(RegistroDeDatos);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 250, 111, 31));

        retranslateUi(RegistroDeDatos);

        QMetaObject::connectSlotsByName(RegistroDeDatos);
    } // setupUi

    void retranslateUi(QDialog *RegistroDeDatos)
    {
        RegistroDeDatos->setWindowTitle(QCoreApplication::translate("RegistroDeDatos", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("RegistroDeDatos", "Actualizar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistroDeDatos: public Ui_RegistroDeDatos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRODEDATOS_H
