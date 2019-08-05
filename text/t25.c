/*
题目描述
已有一个已排好的9个元素的数组，今输入一个数要求按原来排序的规律将它插入数组中。
输入
第一行，原始数列。 第二行，需要插入的数字。
输出
排序后的数列
样例输入
1 7 8 17 23 24 59 62 101
50
样例输出
1
7
8
17
23
24
50
59
62
101
*/
#include<stdio.h>

int main25()
{
    int original[9] = {0};
    int sort[10] = {0};
    int n = 0;
    int i = 0;
    int j = 0;

    for(i = 0;i < 9;i++)
    {
        scanf("%d",&a[i]);
    }

    scanf("%d",&n);
    if(original[1] >= original[0])
    {
        for(i = 0;i < 9;i++)
        {
            sort[i] = original[i];
            if(original[i] > n)
            {
                sort[i] = n;
                break;
            }

        }
        for(j = i;j < 9;j++)
        {
            sort[j+1] = original[j];
        }
    }
    for(i = 0;i < 10;i++)
    {
        printf("%d\n",sort[i]);
    }
    return 0;
}
