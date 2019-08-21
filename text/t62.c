/*
题目描述
编写程序，输入一个正整数n，求下列算式的值。要求定义和调用函数fact(k)计算k的阶乘，函数返回值的类型是double。

1+1/2+ .... +1/n!



输出保留5位小数。

输入
无
输出
无
样例输入
5
样例输出
sum=1.71667
*/
#include<stdio.h>

double fact(int number)
{
    int i = 0;
    double product = 1;

    for(i = 1;i <= number;i++)
    {
        product = product * i;
    }

    return product;
}
int main62()
{
    int number = 0;
    int i = 0;
    double sum = 0;
    double factorial = 0;  // 阶乘

    scanf("%d",&number);
    for(i = 1;i <= number;i++)
    {
         factorial = fact(i);
         sum = sum + (1 / factorial);
    }

    printf("sum=%.5lf\n",sum);

    return 0;
}
