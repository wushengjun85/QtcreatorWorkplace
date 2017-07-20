#include "widget.h"
#include "ui_widget.h"
#include<QDebug>

uchar i = 1;
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->progressBar->setRange(1,7);
    ui->progressBar->setValue(1);
    ui->progressBar->setStyleSheet("QProgressBar {border: 2px solid grey;border-radius: 5px;text-align: center;}");

    int nn = 8;
    int ff = 7<<8;
    qDebug()<<"7<<8 == "<<ff<<endl;

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_2_clicked()
{
       i++;
       ui->progressBar->setValue(i);
       if(i<3)
       {
           ui->progressBar->setStyleSheet("QProgressBar::chunk { background-color: rgb(255, 0, 0) }");
           ui->progressBar->setStyleSheet("QProgressBar {border: 2px solid grey;border-radius: 5px;text-align: center;}");
       }
       else if((i>3)&&(i<6))
       {
            ui->progressBar->setStyleSheet("QProgressBar {border: 2px solid grey;border-radius: 5px;}");
            //ui->progressBar->setStyleSheet("QProgressBar::chunk {background-color: #05B8CC;width: 20px;}");
            ui->progressBar->setStyleSheet("QProgressBar::chunk {background-color: #CD96CD;width: 10px;margin: 0.5px;}");
            ui->progressBar->setStyleSheet("QProgressBar::chunk {background-color: #CD96CD;width: 10px;margin: 0.5px;}");

       }
}

void Widget::on_pushButton_clicked()
{
    i--;
    ui->progressBar->setValue(i);
}
