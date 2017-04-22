#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

//    QStringList headerLabels;
//    headerLabels << "C1" << "C2"<<"C3";

//    ui->tableWidget->setHorizontalHeaderLabels(headerLabels);


    //设置表格行标题的对齐方式
    ui->tableWidget->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);


    QTableWidgetItem *item0, *item1;
    item0 = new QTableWidgetItem;
    item1 = new QTableWidgetItem;

    QString txt = QString("%1").arg(6);
    item0->setText(txt);

    QString txt2 = QString("%1").arg(9);
    item1->setText(txt2);

    ui->tableWidget->setItem(0,0,item0);
    ui->tableWidget->setItem(1,0,item1);
}

Widget::~Widget()
{
    delete ui;
}
