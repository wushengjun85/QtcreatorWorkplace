#ifndef WIDGET_H
#define WIDGET_H
#include<QListWidgetItem>
#include <QWidget>
#include <QPainter>
#include <QTimer>
#include<QTime>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();
    void scrollCaption();

private:
    Ui::Widget *ui;
    //QListWidget *list;
    QTimer *m_timer;

    QTimer *Three_timer;


    int m_charWidth;
    int m_curIndex;
    QString m_showText;

protected:
    void paintEvent(QPaintEvent *event);

private slots:
    void on_listWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous);
    void on_pushButton_3_clicked();
    void updateIndex();

    void sumTest();

};

#endif // WIDGET_H
