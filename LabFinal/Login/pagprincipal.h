#ifndef PAGPRINCIPAL_H
#define PAGPRINCIPAL_H
#include "registrodedatos.h"
#include <QDialog>


using namespace std;
namespace Ui {
class pagPrincipal;
}

class pagPrincipal : public QDialog
{
    Q_OBJECT

public:
    explicit pagPrincipal(QWidget *parent = nullptr);
    ~pagPrincipal();

private slots:
    void on_ValoreActuales_clicked();

    void on_RegistroAnterior_clicked();
    void datos(QString vec);
    void mostrar_datos(float vari,float por,float Vcrit,QString fun);
private:
    Ui::pagPrincipal *ui;
};

#endif // PAGPRINCIPAL_H








