#include "widget.h"
#include "ui_widget.h"

uchar flagswitchzuowu;//作物选择 ，玉米，小麦，大豆。

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->comboBox->addItem(QString::fromUtf8("小麦"));
    ui->comboBox->addItem(QString::fromUtf8("玉米"));
    ui->comboBox->addItem(QString::fromUtf8("大豆"));

    ui->comboBox->setCurrentIndex(1);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_comboBox_activated(int index)
{
    flagswitchzuowu = index;//作物选择 ，玉米，小麦，大豆。
   // qDebug()<<"index == "<<index<<endl;
}
