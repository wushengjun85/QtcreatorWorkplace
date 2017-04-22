#ifndef MYTHREAD_H
#define MYTHREAD_H
 #include <QThread>
#include"mythread.h"
class Mythread : public QThread
{
public:
    Mythread();

protected:
    void run();

};

#endif // MYTHREAD_H
