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
int max(int a,int b)
{
    int i = 0;
    int m = 0;
    int n = 0;
    int k[100] = {0};
    if(a > b)
    {
        m = a;
        n = b;
    }
    else
    {
        m = b;
        n = a;
    }
    k[0] = m % n;
    if(k[0] == 0)
    {
        return n;
    }
    k[1] = k[0] % n;
    if(k[1] == 0)
    {
        return n;
    }
    for(i = 0;i < 100;i++)
    {
        k[i+2] = k[i+1] % k[i];
        if(k[i+2] == 0)
        {
            return k[i];
        }
    }
    return 0;
}
int min(int a,int b,int m)
{
    int n = 0;
    n = a/m * b/m * m;
    return n;
}
int main27()
{
    int a = 0;
    int b = 0;
    int n = 0;
    int m = 0;
    scanf("%d%d",&a,&b);
    m = max(a,b);
    n = min(a,b,m);
    printf("%d %d\n",m,n);
    return 0;
}
