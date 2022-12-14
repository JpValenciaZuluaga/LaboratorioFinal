#include "registrodedatos.h"
#include "ui_registrodedatos.h"
#include "pagprincipal.h"
RegistroDeDatos::RegistroDeDatos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegistroDeDatos)
{
    ui->setupUi(this);
}

RegistroDeDatos::~RegistroDeDatos()
{
    delete ui;
}

void RegistroDeDatos::on_Atras_clicked()
{
    this->hide();

    pagPrincipal pagprincipal;
    pagprincipal.setModal(true);
    pagprincipal.exec();

}
void RegistroDeDatos::datos(QString(vec))
{

    int Tvel= vec.indexOf("Tv:");
    int Tfre= vec.indexOf("Tf:");
    int Tvol= vec.indexOf("Tvol:");
    int Ttem= vec.indexOf("Tt:");
    int vel_ref=vec.indexOf("vel_ref");
    int freq_ref=vec.indexOf("freq_ref");
    int volt_ref=vec.indexOf("volt_ref");
    int temp_ref=vec.indexOf("temp_ref");

    QString Tvelocidad= vec.mid(Tvel+4,Tfre-7);
    float vel=Tvelocidad.toFloat();
    ui->Referencia_tolerancia->addItem("Tolerancia de Velocidad=  "+QString::number(vel)+" %");
    //mostrar_datos1(1,vel, 1800,"Tolerancia de Velocidad= ");

    QString TFrecuencia=vec.mid(Tfre+4,Tfre-6);

    float fre=TFrecuencia.toFloat();
    ui->Referencia_tolerancia->addItem("Tolerancia de Frecuencia=  "+QString::number(fre)+" %");
    //mostrar_datos1(1, fre, 60,"Tolerancia de Frecuencia= ");

    QString TVoltaje=vec.mid(Tvol+Tfre+16,Tvol+5);

    float vol=TVoltaje.toFloat();
    ui->Referencia_tolerancia->addItem("Tolerancia de Voltaje= "+QString::number(vol)+" %");

   // mostrar_datos1(1, vol, 120,"Tolerancia de Voltaje= ");

    QString TTemperatura=vec.mid(Ttem+4,Tfre-6);
    float temp=TTemperatura.toFloat();
    ui->Referencia_tolerancia->addItem("Tolerancia de Temperatura= "+QString::number(temp)+" %");

    //mostrar_datos1(1, temp, 40,"Tolerancia de Temperatura= ");





    QString Revelocidad= vec.mid(vel_ref+8,freq_ref-vel_ref-9);
    float revel=Revelocidad.toFloat();
    ui->Reference->addItem("Velocidad de Referencia  "+QString::number(revel)+" rpm");


    //mostrar_datos1(1,vel, revel,"Velocidad de Referencia= ");

    QString ReFrecuencia=vec.mid(freq_ref+9,(volt_ref-freq_ref)-11);

    float refre=ReFrecuencia.toFloat();
    ui->Reference->addItem("Frecuencia de Referencia  "+QString::number(refre)+" Hz");
    //qDebug() << "entrara Tvele" << ReFrecuencia ;

    //mostrar_datos1(1, fre, refre,"Frecuencia de Referencia= ");

    QString ReVoltaje=vec.mid(volt_ref+9,(volt_ref-freq_ref)-10);

    float revol=ReVoltaje.toFloat();
    ui->Reference->addItem("Voltaje de Referencia  "+QString::number(revol)+" V");
    //qDebug() << "entrara Tvele" << ReVoltaje ;

    //mostrar_datos1(1, vol, revol,"Voltaje de Referencia= ");

    QString ReTemperatura=vec.mid(temp_ref+9,(volt_ref-freq_ref)-11);

    float retemp=ReTemperatura.toFloat();
    ui->Reference->addItem("Temperatura de Referencia  "+QString::number(retemp)+" °C");

    //qDebug() << "entrara Tvele" << ReTemperatura ;

    //mostrar_datos1(1, temp, retemp,"Temperatura de Referencia= ");



}

void RegistroDeDatos::on_pushButton_clicked()
{
    string tex;
    fstream myFILE("/home/alse/Documents/LabFinal/Login/Tolerancia_Referencia.txt");

    while (getline(myFILE,tex))
    {
        QString vec=QString::fromStdString(tex);
        datos(vec);
        ui->Refere->setText(QString::fromStdString(tex));

    }
}

