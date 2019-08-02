/*
题目描述
写一个判断素数的函数，在主函数输入一个整数，输出是否是素数的消息。
输入
一个数
输出
如果是素数输出prime 如果不是输出not prime
样例输入
97
样例输出
prime
*/
#include<stdio.h>
int prime(int n)
{
    int i = 0;
    int f = 0;
    for(i = 2;i < n;i++)
    {
        if(n%i == 0)
        {
            f = 1;
            break;
        }
    }
    return f;
}
int main29()
{
    int n = 0;
    int f = 0;
    scanf("%d",&n);
    f = prime(n);
    if(f == 1)
    {
        printf("not prime\n");
    }
    else
    {
        printf("prime\n");
    }
    return 0;
}
