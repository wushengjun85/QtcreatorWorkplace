#include "widget.h"
#include "ui_widget.h"
#include<QString>
#include<QDebug>
#include<QByteArray>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

//    QString str="FF";
//    bool ok= true;
//    int decotc=str.toInt(&ok,10); //dec=255 ; ok=rue
//    qDebug()<<"decotc == "<<decotc<<endl;

    QString str3 = "123";
    QByteArray ba;
    qDebug()<<ba.append(str3).toHex()<<endl;
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{

    QString temp;
    temp = ui->lineEdit_3->text();
    qDebug()<<temp<<endl;
    bool ok = true;
    int testNumber = temp.toInt(&ok,16);
//    int dec = temp.toInt(&ok,10);
//    int hex = temp.toInt(&ok,16);

//    qDebug()<<"dec == "<<dec<<endl;
//    qDebug()<<"hex NUmber == "<<hex<<endl;

    //FMI
    int Fmi = testNumber;
    Fmi >>= 16;
    Fmi &= 0x1f;
    ui->lineEdit->setText(QString::number(Fmi));

    int SpnGaowei = testNumber;
    SpnGaowei = SpnGaowei>>16;
    SpnGaowei = SpnGaowei&0xe0;
    SpnGaowei = SpnGaowei>>5;

    int SpnDiWeiTwo = testNumber;
    SpnDiWeiTwo &= 0xFFFF;

    int Spn = SpnGaowei;
    Spn <<= 16;
    Spn |= SpnDiWeiTwo;

    ui->lineEdit_2->setText(QString::number(Spn));
}
