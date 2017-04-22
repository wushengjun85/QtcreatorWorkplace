#include <iostream>
#include<string.h>
#define MAX 1024

using namespace std;

/*********************************************************************/
/*统计函数*/
/*********************************************************************/
void cal_num(char *str,int count[])
{
    char *pstr;
    pstr = str;
    while(*pstr) /* *pstr != 0 */
    {
        if(*pstr >= '0' && *pstr <= '9')
        {
            count[0]++;
        }
        else if((*pstr >='a'&&*pstr<='z')||(*pstr >='A' && *pstr <= 'Z'))
        {
            count[1]++;
        }
        else
        {
            count[2]++;
        }
    }
}
/*********************************************************************/
/*主函数*/
/*********************************************************************/

int main(int argc, char *argv[])
{
    //cout << "Hello World!" << endl;
    char str[MAX];
    char ll[10];
    int i,count[3];    /* 0->num; 1->char; 2->others */
    memset(count,0,sizeof(count));
    cout<<"sizeof(count) == "<<sizeof(count)<<endl;
    cout<<"输入字符串"<<endl;
    cin>>ll;
    cout<<ll<<endl;
    cin>>str;
    //cal_num(str,count);
    for(i=0; i<3; i++)
    {
        switch(i)
        {
        case 0:
            cout<<"数字："<<count[i]<<endl;
            break;
        case 1:
            cout<<"字符："<<count[i]<<endl;
            break;
        case 2:
            cout<<"特殊字符："<<count[i]<<endl;
            break;
        }
    }

    return 0;
}
