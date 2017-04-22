#include "mythread.h"
#include<QDebug>

Mythread::Mythread()
{

}

void Mythread::run()
{
    qDebug()<<" thread is runing......."<<endl;

}
