#ifndef WIDGET_H
#define WIDGET_H
#include<QTimer>
#include<QTime>

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    uint fun(long a,uchar b);

private:
    Ui::Widget *ui;
    QTimer *timergzm;
private slots:
    void gzmslottest();//故障码

};

#endif // WIDGET_H
