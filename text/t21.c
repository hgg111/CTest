/*
题目描述
用迭代法求 平方根

公式：求a的平方根的迭代公式为： X[n+1]=(X[n]+a/X[n])/2 要求前后两次求出的差的绝对值少于0.00001。 输出保留3位小数

输入
X

输出
X的平方根

样例输入
4
样例输出
2.000
*/
#include<stdio.h>
#include<math.h>

int main21()
{
    int a = 0;
    int i = 0;
    float x[100] = {0};

    scanf("%d",&a);
    x[0] = a / 2;
    for(i = 0;i < 100;i++)
    {
        x[i+1] = (x[i] + a/x[i]) / 2;
        if(fabs(x[i] - x[i+1]) < 0.00001)
        {
            printf("%4.3f\n",x[i+1]);
            break;
        }
    }
    return 0;
}
