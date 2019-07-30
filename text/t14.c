/*
题目描述
求Sn=1!+2!+3!+4!+5!+…+n!之值，其中n是一个数字(n不超过20)。

输入
n

输出
Sn的值

样例输入
5
样例输出
153
*/
#include<stdio.h>
int main14()
{
    int i = 0;
    int n = 0;
    long long int a[20] = {0};
    long long int Sn = 0;
    scanf("%d",&n);
    a[0] = 1;
    for(i = 1;i <= n;i++)
    {
        a[i] = a[i-1] * i;
        Sn = Sn + a[i];
    }
    printf("%lld\n",Sn);
    return 0;
}
