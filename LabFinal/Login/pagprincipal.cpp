#include "pagprincipal.h"
#include "ui_pagprincipal.h"
#include "QTextStream"
#include "QTextEdit"
#include "QDebug"
#include "QFile"
#include <fstream>
#include <QString>
#include <stdlib.h>
#include <cstdlib>

pagPrincipal::pagPrincipal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pagPrincipal)
{
    ui->setupUi(this);
}

pagPrincipal::~pagPrincipal()
{
    delete ui;
}
void pagPrincipal::on_RegistroAnterior_clicked()
{


        this->hide();
        RegistroDeDatos registroDeDatos;
        registroDeDatos.setModal(true);
        registroDeDatos.exec();

}
void pagPrincipal::datos(QString(vec))
{

    int ve= vec.indexOf("vel: ");
    int fe= vec.indexOf("freq: ");
    int vo= vec.indexOf("vol: ");
    int tem= vec.indexOf("temp: ");
    int tiem= vec.indexOf("tiempo: ");
    int Tvel= vec.indexOf("Tv:");
    int Tfre= vec.indexOf("Tf:");
    int Tvol= vec.indexOf("Tvol:");
    int Ttem= vec.indexOf("Tt:");
    int vel_ref=vec.indexOf("vel_ref");
    int freq_ref=vec.indexOf("freq_ref");
    int volt_ref=vec.indexOf("volt_ref");
    int temp_ref=vec.indexOf("temp_ref");

    QString velocidad= vec.mid(ve+4,fe-7);
    float vel=velocidad.toFloat();

    QString Frecuencia=vec.mid(fe+5,(vo-fe)-6);

    float fre=Frecuencia.toFloat();
   // mostrar_datos(fre, 0.05, 60,"Frecuencia= ");

    QString Voltaje=vec.mid(vo+4,(vo-fe)-5);

    float vol=Voltaje.toFloat();

    QString Temperatura=vec.mid(tem+5,(vo-fe)-6);

    float temp=Temperatura.toFloat();

    QString Tiempo=vec.mid(tiem+7,3);

    float tim=Tiempo.toFloat();
    ui->tabla->addItem(" ");

    QString Tvelocidad= vec.mid(Tvel+4,Tfre-7);
    float vel1=Tvelocidad.toFloat();
    //mostrar_datos( vel,vel1, 1800,"Tolerancia de Velocidad= ");

    QString TFrecuencia=vec.mid(Tfre+4,Tfre-6);

    float fre1=TFrecuencia.toFloat();

    QString TVoltaje=vec.mid(Tvol+Tfre+16,Tvol+5);

    float vol1=TVoltaje.toFloat();

   //mostrar_datos(vol, vol1, 120,"Tolerancia de Voltaje= ");

    QString TTemperatura=vec.mid(Ttem+4,Tfre-6);
    float temp1=TTemperatura.toFloat();

    //mostrar_datos(temp, temp1, 40,"Tolerancia de Temperatura= ");





    QString Revelocidad= vec.mid(vel_ref+8,freq_ref-vel_ref-9);
    float revel=Revelocidad.toFloat();


    //mostrar_datos(vel,vel1, revel,"Velocidad de Referencia= ");

    QString ReFrecuencia=vec.mid(freq_ref+9,(volt_ref-freq_ref)-11);

    float refre=ReFrecuencia.toFloat();
   // qDebug() << "entrara Tvele" << ReFrecuencia ;

    //mostrar_datos(fre, fre1, refre,"Frecuencia de Referencia= ");

    QString ReVoltaje=vec.mid(volt_ref+9,(volt_ref-freq_ref)-10);

    float revol=ReVoltaje.toFloat();
    //qDebug() << "entrara Tvele" << ReVoltaje ;

    //mostrar_datos(vol, vol1, revol,"Voltaje de Referencia= ");

    QString ReTemperatura=vec.mid(temp_ref+9,(volt_ref-freq_ref)-11);

    float retemp=ReTemperatura.toFloat();

    //qDebug() << "entrara Tvele" << ReTemperatura ;

   //mostrar_datos(temp, temp1, retemp,"Temperatura de Referencia= ");
   mostrar_datos(vel,vel1, revel,"Velocidad   = ");
   mostrar_datos(fre,fre1,refre,"Frecuencia = ");
   mostrar_datos(vol,vol1, revol,"Voltaje= ");
   mostrar_datos(temp,temp1,retemp,"Temperatura= ");
   mostrar_datos(tim,3,3,"Tiempo= ");






}








void pagPrincipal::mostrar_datos(float vari, float por, float Vcrit, QString fun)
{


    if (vari>0)
    {    float tolerabel= (Vcrit*por)/100;
         qDebug()<<tolerabel;
        if ((Vcrit-(Vcrit*por))> vari || vari > ((Vcrit+(Vcrit*por))))
            {ui->tabla->addItem(fun+QString::number(vari));
            ui->tabla->setStyleSheet("color:red");}
            else {
                ui->tabla->addItem(fun+QString::number(vari));
                ui->tabla->setStyleSheet("color:green");
                 }
    }
}



void pagPrincipal::on_ValoreActuales_clicked()
{

    string tex;
    fstream myFILE("/home/alse/Documents/LabFinal/Login/valores.txt");

    while (getline(myFILE,tex))
    {
        QString vec=QString::fromStdString(tex);
        datos(vec);
        ui->text->setText(QString::fromStdString(tex));

    }
    string tex1;
    fstream Reference("/home/alse/Documents/LabFinal/Login/Tolerancia_Referencia.txt");

    while (getline(Reference,tex1))
    {
        QString vec=QString::fromStdString(tex1);
        datos(vec);
        ui->text->setText(QString::fromStdString(tex1));

    }

}
