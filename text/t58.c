/*
题目描述
输入一个正数x和一个正整数n，求下列算式的值。要求定义两个调用函数：fact(n)计算n的阶乘；mypow(x,n)计算x的n次幂（即xn），两个函数的返回值类型是double。

      x - x2/2! + x3/3! + ... + (-1)n-1xn/n!

×输出保留4位小数。

输入
x n

输出
数列和

样例输入
2.0 3
样例输出
1.3333
*/

#include<stdio.h>

/********************************************
函数名称：mypow
描述：计算number1的number2次幂
参数：输入的正数number1和整数number2
返回值：返回number1的number2次幂nownumber
********************************************/

double mypow(double number1,int number2)
{
    int i = 0;
    double nownumber = 1.0;

    for(i = 1;i <= number2;i++)
    {
        nownumber = number1 * nownumber;
    }

    return nownumber;
}

/********************************************
函数名称：fact
描述：计算number2的阶乘
参数：输入的整数number2
返回值：返回number2的阶乘nownumber
********************************************/

double fact(int number2)
{
    int i = 0;
    double nownumber = 1.0;

    for(i = 1;i <= number2;i++)
    {
        nownumber = nownumber * i;
    }

    return nownumber;
}

int main58()
{
    double number1 = 0;
    int number2 = 0;
    int i = 0;
    int f = -1;
    double numerator = 0;    // 分数的分子
    double denominator = 0;  // 分数的分母
    double sum = 0;

    scanf("%lf%d",&number1,&number2);

    for(i = 1;i <= number2;i++)
    {
        f = f * (-1); // 用来判断该项的正负
        numerator = mypow(number1,i);
        denominator = fact(i);
        sum = sum + ((numerator / denominator) * f);
    }

    printf("%.4lf\n",sum);

    return 0;
}
