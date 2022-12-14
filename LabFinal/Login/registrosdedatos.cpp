#include "registrosdedatos.h"
#include "ui_registrosdedatos.h"

RegistrosDeDatos::RegistrosDeDatos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegistrosDeDatos)
{
    ui->setupUi(this);
}

RegistrosDeDatos::~RegistrosDeDatos()
{
    delete ui;
}
