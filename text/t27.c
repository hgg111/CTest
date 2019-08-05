/*
题目描述
写两个函数，分别求两个整数的最大公约数和最小公倍数，用主函数调用这两个函数，并输出结果两个整数由键盘输入。
输入
两个数
输出
最大公约数 最小公倍数
样例输入
6 15
样例输出
3 30
*/
#include<stdio.h>

int max(int num1,int num2)//找出两个整数的最大公约数
{
    int i = 0;
    int m = 0;
    int n = 0;
    int k[100] = {0};

    if(num1 > num2)
    {
        m = num1;
        n = num2;
    }
    else
    {
        m = num2;
        n = num1;
    }
    k[0] = m % n;
    if(0 == k[0])
    {
        return n;
    }
    k[1] = k[0] % n;
    if(0 == k[1])
    {
        return n;
    }
    for(i = 0;i < 100;i++)
    {
        k[i+2] = k[i+1] % k[i];
        if(0 == k[i+2])
        {
            return k[i];
        }
    }
    return 0;
}

int min(int num1,int num2,int divisor)
{
    int n = 0;
    n = (num1 / divisor) * (num2 / divisor) * divisor;
    return n;
}

int main27()
{
    int num1 = 0;
    int num2 = 0;
    int multiple = 0;//最小公倍数
    int divisor = 0;//最大公约数

    scanf("%d%d",&num1,&num2);
    divisor = max(num1,num2);
    multiple = min(num1,num2,divisor);
    printf("%d %d\n",divisor,multiple);
    return 0;
}
