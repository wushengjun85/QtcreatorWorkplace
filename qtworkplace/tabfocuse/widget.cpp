#include "widget.h"
#include "ui_widget.h"
#include<QPushButton>
#include<QLineEdit>
#include<QEvent>
#include<QDebug>
#include <QKeyEvent>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

//    this->setTabOrder(ui->pushButton,ui->pushButton_3);
//    this->setTabOrder(ui->pushButton_3,ui->pushButton_2);

    //ui->pushButton_3->setStyleSheet("border:8px solid red;");
    ui->pushButton->installEventFilter(this);
    ui->pushButton_2->installEventFilter(this);
    ui->pushButton_3->installEventFilter(this);
    ui->pushButton_4->installEventFilter(this);


}

Widget::~Widget()
{
    delete ui;
}

bool Widget::eventFilter(QObject *watched, QEvent *event)
{
#if 1
    //qDebug()<<"hello woeld"<<endl;

    if(watched == ui->pushButton||watched == ui->pushButton_2||watched == ui->pushButton_3||watched==ui->pushButton_4)
    {


        if(event->type() == QEvent::KeyPress)
        {
            bool f1 = ui->pushButton->hasFocus();
            bool f2 = ui->pushButton_2->hasFocus();
            bool f3 = ui->pushButton_3->hasFocus();
            bool f4 = ui->pushButton_4->hasFocus();

            QKeyEvent *key_event = static_cast<QKeyEvent *>(event);
            if(key_event->key() == Qt::Key_D)//4100
            {


                if(f1)
                {
                    focusNextChild();
                    ui->pushButton_2->setFocus();
                    ui->pushButton_2->setStyleSheet("border:2px solid red;");
                }
                if(f2)
                {
                    focusNextChild();
                    ui->pushButton_3->setFocus();
                    ui->pushButton_3->setStyleSheet("border:2px solid red;");
                }
                if(f3)
                {
                    focusNextChild();
                    ui->pushButton_4->setFocus();
                    ui->pushButton_4->setStyleSheet("border:2px solid red;");
                }

                return true;

            }

//            if (event->type()==QEvent::FocusIn)     //然后再判断控件的具体事件(这里指获得焦点事件)
//            {
//                ui->pushButton->setStyleSheet("border:2px solid red;");
//                qDebug()<<"hello woeld"<<endl;
//            }

            if(key_event->key() == Qt::Key_S)//4115
            {
                if(f2)
                {
                    focusNextChild();
                    ui->pushButton->setFocus();
                    ui->pushButton->setStyleSheet("border:2px solid blue;");
                }
                if(f3)
                {
                    focusNextChild();
                    ui->pushButton_2->setFocus();
                    ui->pushButton_2->setStyleSheet("border:2px solid blue;");
                }
                if(f4)
                {
                    focusNextChild();
                    ui->pushButton_3->setFocus();
                    ui->pushButton_3->setStyleSheet("border:2px solid blue;");
                }
                return true;

            }

        }
        else
        {

            return false;
        }


    }
    else
    {
        return QWidget::eventFilter(watched, event);
    }
#endif
}
