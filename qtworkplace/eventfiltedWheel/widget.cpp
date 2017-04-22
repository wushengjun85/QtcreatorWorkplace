#include "widget.h"
#include "ui_widget.h"
#include<QDebug>
#include<QEvent>
#include <QKeyEvent>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->textEdit->installEventFilter(this);
}

Widget::~Widget()
{
    delete ui;
}
bool Widget::eventFilter(QObject *watched, QEvent *event)
{

    if(watched == ui->textEdit)
    {
        if(event->type() == QEvent::Wheel)
        {
            QWheelEvent *mytest = static_cast<QWheelEvent *>(event);

            if(mytest->delta()>0)
                ui->textEdit->zoomIn();
            else
                ui->textEdit->zoomOut();

            return true;
        }
        else
            return QWidget::eventFilter(watched,event);

    }


    if (watched == ui->textEdit) {
        if (event->type() == QEvent::KeyPress) {
             QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
             qDebug() << "Ate key press" << keyEvent->key();
              return true;
          } else {
             return false;
           }
       } else {
       // pass the event on to the parent class
        return QWidget::eventFilter(watched, event);
    }
}
