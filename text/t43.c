/*
题目描述
输入10个整数，将其中最小的数与第一个数对换，把最大的数与最后一个数对换。写三个函数； ①输入10个数；②进行处理；③输出10个数。
输入
10个整数
输出
整理后的十个数，每个数后跟一个空格（注意最后一个数后也有空格）
样例输入
2 1 3 4 5 6 7 8 10 9
样例输出
1 2 3 4 5 6 7 8 9 10
*/
#include<stdio.h>

void input(int number[]) //输入整数
{
    int i = 0;
    for(i = 0;i < 10;i++)
    {
        scanf("%d",&number[i]);
    }
}

void change(int number[]) //处理，传入数组
{
    int min = 0;
    int max = 0;
    int mini = 0;
    int maxi = 0;
    int t = 0;
    int i = 0;

    min = max = number[0];
    for(i = 0;i < 10;i++)
    {
        if(number[i] < min)
        {
            min = number[i];
            mini = i;
        }
        if(number[i] > max)
        {
            max = number[i];
            maxi = i;
        }
    }

    t = number[0];
    number[0] = min;
    number[mini] = t;  //将最小数与第一个数换位置

    if(0 == maxi)
    {
        maxi = mini;
    }        //若最大的数为第一个数时，则最大数的下标要换成最小数的下标

    t = number[9];
    number[9] = max;
    number[maxi] = t;  //将最大数与最后一个数换位置
}

void output(int number[])  //输出数据，传入参数为数组
{
    int i = 0;
    for(i = 0;i < 10;i++)
    {
        printf("%d ",number[i]);
    }
    printf("\n");
}

int main43()
{
    int number[10] = {0};

    input(number);
    change(number);
    output(number);

    return 0;
}
