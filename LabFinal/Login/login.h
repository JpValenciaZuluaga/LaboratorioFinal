#ifndef LOGIN_H
#define LOGIN_H
#include "pagprincipal.h"
#include <QMainWindow>
//#include <QtSql/QSqlDatabase>

#include "QFileDialog"

QT_BEGIN_NAMESPACE
namespace Ui { class Login; }
QT_END_NAMESPACE

class Login : public QMainWindow
{
    Q_OBJECT

public:
    Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_BotonIngreso_clicked();



private:
    Ui::Login *ui;

};
#endif // LOGIN_H
