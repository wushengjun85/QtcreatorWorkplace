#ifndef MYFIRSTLABEL_H
#define MYFIRSTLABEL_H

#include <QObject>
#include <QLabel>
class MyfirstLabel : public QLabel
{
    Q_OBJECT
public:
    explicit MyfirstLabel(QWidget *parent = 0);

    void Myfun();

signals:

public slots:
};

#endif // MYFIRSTLABEL_H
