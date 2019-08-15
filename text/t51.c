/*
题目描述
输入10个数，求它们的平均值，并输出大于平均值的数据的个数。

输入
10个数

输出
大于平均数的个数

样例输入
1 2 3 4 5 6 7 8 9 10
样例输出
5
*/
#include<stdio.h>

int main()
{
    int number[10] = {0};
    int i = 0;
    int count = 0;
    int sum = 0;

    for(i = 0;i < 10;i++)
    {
        scanf("%d",&number[i]);
        sum = sum + number[i];
    }

    for(i = 0;i < 10;i++)
    {
        if(number[i] > (sum / 10))
        {
            count++;
        }
    }

    printf("%d\n",count);

    return 0;

}
