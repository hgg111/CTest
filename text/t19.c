/*
题目描述
一球从M米高度自由下落，每次落地后返回原高度的一半，再落下。 它在第N次落地时反弹多高？共经过多少米？ 保留两位小数
输入
M N
输出
它在第N次落地时反弹多高？共经过多少米？ 保留两位小数，空格隔开，放在一行
样例输入
1000 5
样例输出
31.25 2875.00
*/
#include<stdio.h>

int main19()
{
    int m = 0;
    int n = 0;
    int i = 0;
    float sum = 0;
    float bounce[100] = {0};//表示每次反弹高度

    scanf("%d%d",&m,&n);

    bounce[1] = m / 2;
    sum = m;
    for(i = 2;i <= n;i++)
    {
        bounce[i] = bounce[i-1] / 2;
        sum = sum + (2*bounce[i-1]);
    }

    printf("%4.2f %4.2f",bounce[n],sum);
    return 0;
}
