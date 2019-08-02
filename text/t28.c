/*
题目描述
求方程 的根，用三个函数分别求当b^2-4ac大于0、等于0、和小于0时的根，并输出结果。从主函数输入a、b、c的值。
输入
a b c
输出
x1=? x2=?
样例输入
4 1 1
样例输出
x1=-0.125+0.484i x2=-0.125-0.484i
*/
#include<stdio.h>
#include<math.h>
void root1(float a,float b,float c,float n)
{
    float x1 = 0;
    float x2 = 0;
    n = sqrt(n);
    x1 = (-b + n) / (2*a);
    x2 = (-b - n) / (2*a);
    printf("x1=%4.3f x2=%4.3f",x1,x2);
}
void root2(float a,float b,float c,float n)
{
    float x = 0;
    n = sqrt(n);
    x = -b / (2*a);
    printf("x1=x2=%4.3f",x);
}
void root3(float a,float b,float c,float n)
{
    float e = 0;
    float f = 0;
    n = sqrt(-1*n);
    e = -b / (2*a);
    f = n / (2*a);
    printf("x1=%4.3f+%4.3fi x2=%4.3f-%4.3fi",e,f,e,f);
}
int main28()
{
    float a = 0;
    float b = 0;
    float c = 0;
    float n = 0;
    scanf("%f%f%f",&a,&b,&c);
    n = b*b - 4*a*c;
    if(n > 0)
    {
        root1(a,b,c,n);
    }
    if(n == 0)
    {
        root2(a,b,c,n);
    }
    if(n < 0)
    {
        root3(a,b,c,n);
    }
    return 0;
}
