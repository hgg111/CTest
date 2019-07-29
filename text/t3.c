/*
题目描述
编写一个程序，输入a、b、c三个值，输出其中最大值。
输入
一行数组，分别为a b c
输出
a b c其中最大的数
样例输入
10 20 30
样例输出
30
*/
#include<stdio.h>
int main3()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int max = 0;
    scanf("%d%d%d",&a,&b,&c);
    if(a >= b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    if(max < c)
    {
        max = c;
    }
    printf("%d",max);
    return 0;
}
