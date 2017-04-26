#include <iostream>
using namespace std;
/*****************定义stack结构***********************/
template <typename DataType>
class Stack
{
public:
    Stack(int size)
    {
        maxsize = size;
        top = -1;
        elements = new DataType[size];
    }
    ~Stack()
    {
        delete [] elements;
    }
    //入栈操作
    bool push(DataType data);
    //出栈操作
    DataType pop();
    /*******************判空*********************/
    bool isEmpty();
    /*******************获取元素*****************/
    int eleNumber();

private:
    DataType *elements;
    int top;
    int maxsize;
};
/************************入栈操作*****************/
template <typename DataType>
bool Stack<DataType>::push(DataType data)
{
    if(top == maxsize)
    {
        return  false;
    }
    elements[++top] = data;
    return true;
}
/************************出栈操作*****************/
template <typename DataType>
DataType Stack<DataType>::pop()
{
    if(top == -1)
    {
        exit(-1);
    }
    return  elements[top--];
}
/***********************判空***********************/
template <typename DataType>
bool Stack<DataType>::isEmpty()
{
    if(top == -1)
    {
        return true;
    }
    else {
        return false;
    }
}
/***********************获取当前元素*******************/
template <typename DataType>
int Stack<DataType>::eleNumber()
{
    if(top >= 0)
        return top + 1;
    else {
        return 0;
    }
}

/**************************利用栈实现队列功能**************/
template <class T>
class QueueFromStack
{
public:
    QueueFromStack(int size = 10)
    {
        s1 = new Stack<T>(size);
        s2 = new Stack<T>(size);
    }
    ~QueueFromStack()
    {
        s1->~Stack();
        s2->~Stack();
    }
    bool push(T data);
    T pop();
private:
    Stack<T> *s1;
    Stack<T> *s2;
    int size;
};

/***********************实现入队列**************/
template <class T>
bool QueueFromStack<T>::push(T data)
{
    if(s2->isEmpty())
    {
        return s1->push(data);
    }
    else if (s1->eleNumber()<(size-s2->eleNumber())) {
    return s1->push(data);
    }
    else
    {
        cout<<"队列满"<<endl;
        return false;
    }
}
/******************出队列*********************/
template <class T> T QueueFromStack<T>::pop()
{
    T temp;
    if(!s2->isEmpty())
    {
        return s2->pop();

    }
    else
    {
        while (!s1->isEmpty()&&s1->eleNumber()>1) {
            temp = s1->pop();
            s2->push(temp);
        }
        return s1->pop();
    }
}
/*****************测试函数***************************/

int main(int argc, char *argv[])
{
    //cout << "Hello World!" << endl;
    QueueFromStack<int>qs(12);
    cout<<"入队元素："<<endl;
    for(int i = 1; i <= 12; i++)
    {
        cout<<i*i<<" ";
        qs.push(i*i);
    }
    cout<<endl;
    cout<<"出堆元素："<<endl;
    for(int i = 1; i <= 12; i++)
    {
        cout<<qs.pop()<<" ";
    }
    cout<<endl;
    return 0;
}
