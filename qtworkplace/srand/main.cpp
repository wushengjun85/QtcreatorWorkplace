#include <iostream>
#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>

using namespace std;
#define MAX 101


/***************************************************************/
/*输入处理函数*/
/***************************************************************/
void input(int num[])
{
    int i;
    srand((unsigned)time(NULL));
    for(i=1;i < MAX; i++)
    {
        num[i] = rand()%100;
    }
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
     cout<<endl;
}
/***************************************************************/
/*统计数字个数*/
/***************************************************************/
void cal_num(int num[],int count[])
{

    int i,mod;
    for(i=1; i <MAX; i++)
    {

        mod = num[i]%10;
        count[mod]++;
    }
}
/***************************************************************/
/*主函数*/
/***************************************************************/

int main(int argc, char *argv[])
{
    int num[MAX];
    int i;
    int count[10];
    memset(count,0,10*sizeof(int));
    input(num);
    cout<<"100 num : "<<endl;
    output(num);
    cal_num(num, count);
    for(i= 0; i <10; i++)
        cout<<i<<":"<<count[i]<<endl;

    //cout << "Hello World!" << endl;
    return 0;
}
