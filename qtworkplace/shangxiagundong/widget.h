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

public slots:
    void setText(const QString &);

protected:
    void showEvent(QShowEvent *);
    void paintEvent(QPaintEvent *);
    void timerEvent(QTimerEvent *);
    void hideEvent(QHideEvent *);

private slots:
    void metrics();
    void startScroll();

signals:
    void currentTextChanged();

private:
    int getHeight();

private:
    int offset;
    int timerID;
    int textHeight;
};

#endif // WIDGET_H
