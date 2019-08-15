/*
题目描述
sum=2+5+8+11+14+…，输入正整数n，求sum的前n项和。
输入
无
输出
无
样例输入
2
样例输出
7
*/
#include<stdio.h>

int main55()
{
    int data[100] = {0};
    int sum = 0;
    int i = 0;
    int number = 0;

    scanf("%d",&number);
    data[0] = 2;
    sum = 2;
    if(1 == number)
    {
        sum = 2;
    }
    else
    {
        for(i = 1;i < number;i++)
        {
            data[i] = data[i - 1] + 3;
            sum = sum + data[i];
        }
    }

    printf("%d\n",sum);

    return 0;
}
