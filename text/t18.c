/*
题目描述
有一分数序列： 2/1 3/2 5/3 8/5 13/8 21/13...... 求出这个数列的前N项之和，保留两位小数。
输入
N
输出
数列前N项和
样例输入
10
样例输出
16.48
*/
#include<stdio.h>
int main18()
{
    int n = 0;
    int i = 0;
    float Sn = 0;
    float a[100] = {0};
    float b[100] = {0};
    scanf("%d",&n);
    a[0] = 1;
    a[1] = 2;
    for(i = 2;i <= n;i++)
    {
        a[i] = a[i-1] + a[i-2];
    }
    for(i = 0;i < n;i++)
    {
        b[i] = a[i+1] / a[i];
        Sn = Sn + b[i];
    }
    printf("%4.2f\n",Sn);
    return 0;
}
