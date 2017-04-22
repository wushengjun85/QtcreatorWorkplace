/******************************************/
/*查找指定的数字的位置*/
/******************************************/

#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
#define MAX 101
/***************************************************************/
/*输入函数*/
/***************************************************************/
void input(int num[])
{
    int i;
    srand((unsigned)time(NULL));
    for(i = 1; i< MAX; i++)
        num[i] = rand()%100;
}

/***************************************************************/
/*输出函数*/
/***************************************************************/
void output(int num[])
{
    int i;
    for (i = 1; i < MAX; i++)
    {
        cout<<num[i]<<" ";
        if(0 == i%10)
        {
            cout<<endl;
        }
    }
}
/***************************************************************/
/*简单查找函数*/
/***************************************************************/
int find(int num[],int x)
{

    int i;
    for(i = 1; i < MAX; i++)
        if(x == num[i])
            return  i;

    return 0;
}
/***************************************************************/
/*主函数*/
/***************************************************************/
int main()
{
    int x;
    int numls;
    int pos;
    int num[MAX];
    input(num);
    cout<<"rand created is "<<endl;
    output(num);
    cout<<"please input you find number"<<endl;
    cin>>x;
    cin>>numls;
    cout<<"numls == "<<numls<<endl;
    cout<<"x = "<<x<<endl;
    pos = find(num,x);
    cout<<"find pos === "<<pos<<endl;

    if(pos)
        cout<<"OK"<<x<<"is found in pos:"<<pos<<endl;
    else
        cout<<"OK"<<x<<"is found in pos:"<<endl;
    return 0;
}
