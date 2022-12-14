#include "login.h"
#include <QMainWindow>
#include <QApplication>
#include "QFile"
#include "QLabel"
#include "QDebug"
int main(int argc, char *argv[])
{ 
    
    QApplication a(argc, argv);
    Login w;

    w.show();
    
    return a.exec();
}
