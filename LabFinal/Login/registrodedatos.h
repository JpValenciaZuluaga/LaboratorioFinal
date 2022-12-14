#ifndef REGISTRODEDATOS_H
#define REGISTRODEDATOS_H
#include "pagprincipal.h"
#include <QDialog>
#include "QFile"
#include "QTextEdit"
#include "QTextStream"
#include <fstream>
#include <QString>
#include <QDebug>
using namespace std;
namespace Ui {
class RegistroDeDatos;
}

class RegistroDeDatos : public QDialog
{
    Q_OBJECT

public:
    explicit RegistroDeDatos(QWidget *parent = nullptr);
    ~RegistroDeDatos();

private slots:

    void on_Atras_clicked();

    void on_pushButton_clicked();
    void datos(QString(vec));
    void mostrar_datos1(float vari, float por, float Vcrit, QString fun);
private:
    Ui::RegistroDeDatos *ui;
};

#endif // REGISTRODEDATOS_H
