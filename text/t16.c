/*
题目描述
打印出所有"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该本身。 例如：153是一个水仙花数，因为153=1^3+5^3+3^3。
输入
无
输出
输出每一个水仙花数，一个数占一行
*/
#include<stdio.h>

int main16()
{
    int i = 0;
    int a = 0;
    int b = 0;
    int c = 0;

    for(i = 100;i < 1000;i++)
    {
        a = i % 10;
        b = (i / 10) % 10;
        c = i / 100;
        if(i == (a*a*a + b*b*b + c*c*c))
        {
            printf("%d\n",i);
        }
    }

    return 0;
}
