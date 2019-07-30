/*
题目描述
求以下三数的和,保留2位小数 1~a之和 1~b的平方和 1~c的倒数和
输入
a b c
输出
1+2+...+a + 1^2+2^2+...+b^2 + 1/1+1/2+...+1/c
样例输入
100 50 10
样例输出
47977.93
*/
#include<stdio.h>
int main15()
{
    int a = 0;
    int b = 0;
    int c = 0;
    float i = 0;
    int suma = 0;
    int sumb = 0;
    float sumc = 0;
    float allsum = 0;
    scanf("%d%d%d",&a,&b,&c);
    for(i = 1;i <= a;i++)
    {
        suma = suma + i;
    }
    for(i = 1;i <= b;i++)
    {
        sumb = sumb + i*i;
    }
    for(i = 1;i <= c;i++)
    {
        sumc = sumc + 1/i;
    }
    allsum = suma + sumb + sumc;
    printf("%4.2f\n",allsum);
    return 0;
}
