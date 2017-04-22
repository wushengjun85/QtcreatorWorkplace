#ifndef WIDGET_H
#define WIDGET_H

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

private:
    Ui::Widget *ui;

     QTimer *timer_Timeout;

protected:
        void keyPressEvent(QKeyEvent  *e);
        void keyReleaseEvent(QKeyEvent *e);

private slots:
         void timeoutfun();//超时
};

#endif // WIDGET_H
