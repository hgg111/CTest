/*
题目描述
用选择法对10个整数从小到大排序。
输入
无
输出
排序好的10个整数
样例输入
4 85  3 234 45 345 345 122 30 12
样例输出
3
4
12
30
45
85
122
234
345
345
选择排序：每次找出最小的数放在前面。
*/
#include<stdio.h>
int main23()
{
    int i = 0;
    int j = 0;
    int t = 0;
    int a[10] = {0};
    for(i = 0;i < 10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i = 0;i < 10;i++)
    {
        for(j = i;j < 10;j++)
        {
            if(a[j] < a[i])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    for(i = 0;i < 10;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
