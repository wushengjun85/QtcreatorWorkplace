#ifndef WIDGET_H
#define WIDGET_H
#include"mythread.h"
#include <QWidget>
#include<QPaintEvent>
#include<QTimer>


namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    Ui::Widget *ui;
    Mythread mythreadfun;

    QTimer *timer_Main;



protected:
    void paintEvent(QPaintEvent *);
};

#endif // WIDGET_H
