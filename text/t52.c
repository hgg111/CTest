/*
题目描述
输入两个正整数m和n(m<n)，求m到n之间(包括m和n)所有素数的和，要求定义并调用函数isprime(x)来判断x是否为素数(素数是除1以外只能被自身整除的自然数)。


输入
m n

输出
素数和

样例输入
2 3
样例输出
5
*/
#include<stdio.h>

int isprime(int number)   // isprime函数用来判断是否为素数，传入的参数为当前数字number
{
    int i = 0;

    if(1 == number)
    {
        return 0;
    }
    for(i = 2;i < number;i++)
    {
        if(0 == (number % i))
        {
            return 0;
        }
    }

    return 1;
}
int main52()
{
    int number1 = 0;
    int number2 = 0;
    int i = 0;
    int sum = 0;
    int f = 0;

    scanf("%d%d",&number1,&number2);

    for(i = number1;i <= number2;i++)
    {
        f = isprime(i);
        if(1 == f)
        {
            sum = sum + i;
        }
    }

    printf("%d",sum);

    return 0;
}
