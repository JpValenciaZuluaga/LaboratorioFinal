/********************************************************************************
** Form generated from reading UI file 'registrosdedatos.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTROSDEDATOS_H
#define UI_REGISTROSDEDATOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_ReguistrosDeDatos
{
public:
    QTableView *tableView;
    QPushButton *pushButton;

    void setupUi(QDialog *ReguistrosDeDatos)
    {
        if (ReguistrosDeDatos->objectName().isEmpty())
            ReguistrosDeDatos->setObjectName(QString::fromUtf8("ReguistrosDeDatos"));
        ReguistrosDeDatos->resize(400, 300);
        tableView = new QTableView(ReguistrosDeDatos);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(60, 60, 256, 192));
        pushButton = new QPushButton(ReguistrosDeDatos);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 260, 80, 23));

        retranslateUi(ReguistrosDeDatos);

        QMetaObject::connectSlotsByName(ReguistrosDeDatos);
    } // setupUi

    void retranslateUi(QDialog *ReguistrosDeDatos)
    {
        ReguistrosDeDatos->setWindowTitle(QCoreApplication::translate("ReguistrosDeDatos", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("ReguistrosDeDatos", "Actualizar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReguistrosDeDatos: public Ui_ReguistrosDeDatos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTROSDEDATOS_H
