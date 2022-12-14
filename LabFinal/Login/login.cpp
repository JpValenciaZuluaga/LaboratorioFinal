#include "login.h"
#include "ui_login.h"
#include "QtDebug"
#include <QtSql>
#include "QTextEdit"
#include "QTextStream"
QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);




}

Login::~Login()
{
    delete ui;
}


void Login::on_BotonIngreso_clicked()
{
    db.setDatabaseName("/home/alse/Documents/LabFinal/Login/Ident.db");
    if(!db.open())
    {
        qDebug() << db.lastError();
        qFatal ("conexión fallida a la base de datos");
    }
    QSqlQuery query;
    query.prepare("CREATE TABLE tabla"+ui->NumMotor->toPlainText()+" (id INTEGER PRIMARY KEY, col1 VARCHAR(20) NOT NULL, col2 INTEGER)");

    QString query_to_insert = "INSERT INTO tabla1 VALUES ( "+ui->EntradaMotor ->toPlainText() +", "+ui->NumMotor->toPlainText()+",3)";

    query.exec();

    if(!query.exec())
            qDebug() <<query.lastError();
    db.close();

    this->hide();
    pagPrincipal pagpricipal;
    pagpricipal.setModal(true);
    pagpricipal.exec();
}

