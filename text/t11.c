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
    int m = 0;
    int n = 0;
    int k = 0;  //k为m,n中较小值
    int i = 0;
    int max = 0;
    int min = 0;

    scanf("%d%d",&m,&n);
    if(m > n)
    {
        k = n;
    }
    else
    {
        k = m;
    }
    for(i = 1;i <= k;i++)
    {
        if((0 == (m%i)) && (0 == (n%i)))
        {
            max = i;
        }
    }
    min = max * (m/max) * (n/max);
    printf("%d %d\n",max,min);
    return 0;
}
