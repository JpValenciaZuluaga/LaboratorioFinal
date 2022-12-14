#ifndef REGISTROSDEDATOS_H
#define REGISTROSDEDATOS_H

#include <QDialog>

namespace Ui {
class RegistrosDeDatos;
}

class RegistrosDeDatos : public QDialog
{
    Q_OBJECT

public:
    explicit RegistrosDeDatos(QWidget *parent = nullptr);
    ~RegistrosDeDatos();

private:
    Ui::RegistrosDeDatos *ui;
};

#endif // REGISTROSDEDATOS_H
