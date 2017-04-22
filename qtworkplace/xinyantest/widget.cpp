#include "widget.h"
#include "ui_widget.h"
#include<QKeyEvent>
#include<QTime>
#include<QDebug>
#include<QLineEdit>


#include <QListView>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QModelIndex>

int i;
int num =4;
QString teststring;
QString t2;

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->lineEdit->installEventFilter(this);

    //
    //控件显示
    //显示时间 。2017.1.14
    QString timeStr1= QTime::currentTime().toString();     //绘制当前的时间
    QString dateStr1 = QDate::currentDate().toString("yyyy-MM-dd");

    ui->lineEdit->setText(dateStr1);


    // ///////////
    listView = new QListView(this);
    standardItemModel = new QStandardItemModel(this);

    QStringList strList;
    strList.append("string1");
    strList.append("string2");
    strList.append("string3");
    strList.append("string4");
    strList.append("string5");
    strList.append("string6");
    strList.append("string7");
    strList << "string8";
    strList += "string9";
    int nCount = strList.size();
    for(int i = 0; i < nCount; i++)
    {
        QString string = static_cast<QString>(strList.at(i));
        QStandardItem *item = new QStandardItem(string);
        if(i % 2 == 1)
        {
            QLinearGradient linearGrad(QPointF(0, 0), QPointF(200, 200));
            linearGrad.setColorAt(0, Qt::darkGreen);
            linearGrad.setColorAt(1, Qt::yellow);
            QBrush brush(linearGrad);
            item->setBackground(brush);
        }
        standardItemModel->appendRow(item);
    }
    listView->setModel(standardItemModel);
    listView->setFixedSize(200,300);
    connect(listView,SIGNAL(clicked(QModelIndex)),this,SLOT(itemClicked(QModelIndex)));
}

Widget::~Widget()
{
    delete ui;
}

bool Widget::eventFilter(QObject *watched, QEvent *event)
{
    if(watched == ui->lineEdit)
    {
        if(event->type() == QEvent::KeyPress)
        {
            QKeyEvent *key_event = static_cast<QKeyEvent *>(event);
            if(key_event->key() == Qt::Key_D)
            {
#if 1
                i = ui->lineEdit->cursorPosition();
                qDebug()<<"i == "<<i<<endl;
                ui->lineEdit->setCursorPosition(--i);
                ui->lineEdit->setFocus();

                teststring =  ui->lineEdit->text();
                t2 = teststring.mid(i,1);
                qDebug()<<"t2 = "<<t2<<endl;
#endif
            }
            else if(key_event->key() == Qt::Key_S)
             {

                 num++;
                 t2 = QString::number(num,10);
                 teststring.replace(i,1,t2);
                 ui->lineEdit->setText(teststring);
             }
        }
    }
}


void Widget::itemClicked(QModelIndex index)
{
    qDebug() << index.data().toString();
}
