#include "widget.h"
#include "ui_widget.h"
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QSpinBox>
#include<QPushButton>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
#if 1
   // QWidget *window = new QWidget;
    QPushButton *button1 = new QPushButton("One");
    QPushButton *button2 = new QPushButton("Two");
    QPushButton *button3 = new QPushButton("Three");
    QPushButton *button4 = new QPushButton("Four");
    QPushButton *button5 = new QPushButton("Five");

//    QVBoxLayout *layout = new QVBoxLayout;
//    layout->addWidget(button1);
//    layout->addWidget(button2);
//    layout->addWidget(button3);
//    layout->addWidget(button4);
//    layout->addWidget(button5);




    QGridLayout *layout = new QGridLayout;
    layout->addWidget(button1, 0, 0);
    layout->addWidget(button2, 0, 1);
    layout->addWidget(button3, 1, 0, 1, 2);
    layout->addWidget(button4, 2, 0);
    layout->addWidget(button5, 2, 1);

//    window->setLayout(layout);
//    window->show();
    this->setLayout(layout);
    this->show();
#endif
    //2017.7.11
#ifdef QVBOX
        QVBoxLayout *layout = new QVBoxLayout;
        layout->addWidget(ui->lineEdit);
        layout->addWidget(ui->lineEdit_2);
        this->setLayout(layout);
        this->show();
#endif


}

Widget::~Widget()
{
    delete ui;
}
