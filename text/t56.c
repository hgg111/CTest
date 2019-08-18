/*
题目描述
求出10至1000之内能同时被2、3、7整除的数，并输出。

每行一个。

输入
无
输出
无
样例输入
无
样例输出
无
*/
#include<stdio.h>

int main56()
{
    int number = 0;

    for(number = 10;number <= 1000;number++)
    {
        if((0 == (number % 2)) && (0 == (number % 3)) && (0 == (number % 7)))
        {
            printf("%d\n",number);
        }
    }

    return 0;
}
