#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    standardItemModel = new QStandardItemModel(this);
    /**********************初始化Item数组************/
    QStringList strList;
    strList.append("a");
    strList.append("b");
    /*********************初始化model***************/
    QString string = "2";//= static_cast<QString>(strList.at(2));
    QStandardItem *item = new QStandardItem(string);
    standardItemModel->appendRow(item);
    ui->listView->setModel(standardItemModel);

    QString string2 = "6";//= static_cast<QString>(strList.at(2));
    QStandardItem *item2 = new QStandardItem(string2);
    standardItemModel->appendRow(item2);
    ui->listView->setModel(standardItemModel);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    ui->listView->close();
}

void Widget::on_pushButton_2_clicked()
{
    ui->listView->show();
}
