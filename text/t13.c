/*
题目描述
求Sn=a+aa+aaa+…+aa…aaa（有n个a）之值，其中a是一个数字，为2。 例如，n=5时=2+22+222+2222+22222，n由键盘输入。

输入
n

输出
Sn的值

样例输入
5
样例输出
24690
*/
#include<stdio.h>
int main13()
{
    int n = 0;
    int i = 0;
    int Sn = 2;
    int a[10] = {0};
    scanf("%d",&n);
    a[0] = 2;
    for(i = 1;i < n;i++)
    {
        a[i] =a[0] + a[i-1]*10;
        Sn = Sn + a[i];
    }
    printf("%d\n",Sn);
    return 0;
}
