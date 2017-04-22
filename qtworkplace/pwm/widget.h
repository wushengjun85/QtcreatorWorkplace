#ifndef WIDGET_H
#define WIDGET_H
#include<QTimer>

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
    QTimer *timerpwm;

    QTimer *timerpwm2;

public slots:
    void pwmfun();
    void pwmfun2();
};

#endif // WIDGET_H
