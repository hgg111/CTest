/*
题目描述
从键盘输入任意20个整型数，统计其中的负数个数并求所有正数的平均值。

保留两位小数

输入
无
输出
无
样例输入
1 2 3 4 5 6 7 8 9 10
-1 -2 -3 -4 -5 -6 -7 -8 -9 -10
样例输出
10
5.50
*/
#include<stdio.h>

int main57()
{
    int number[20] = {0};
    int i = 0;
    int negative = 0;     // 负数的个数
    int positive = 0;     // 正数的个数
    float sum = 0;
    float average = 0;

    for(i = 0;i < 20;i++)
    {
        scanf("%d",&number[i]);
        if(number[i] < 0)
        {
            negative++;
        }
        else
        {
            positive++;
            sum = sum + number[i];
        }
    }

    average = sum / positive;
    printf("%d\n%4.2f\n",negative,average);

    return 0;
}
