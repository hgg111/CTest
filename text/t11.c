/*
题目描述
输入两个正整数m和n，求其最大公约数和最小公倍数。
输入
两个整数
输出
最大公约数，最小公倍数
样例输入
5 7
样例输出
1 35
*/
#include<stdio.h>
int main11()
{
    int a = 0;
    int b = 0;
    int k = 0;
    int i = 0;
    int max = 0;
    int min = 0;
    scanf("%d%d",&a,&b);
    if(a > b)
    {
        k = b;
    }
    else {k = a;}
    for(i = 1;i <= k;i++)
    {
        if((a%i == 0) && (b%i == 0))
        {
            max = i;
        }
    }
    min = max * (a/max) * (b/max);
    printf("%d %d\n",max,min);
    return 0;
}
