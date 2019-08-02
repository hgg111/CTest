/*
题目描述
写一个函数，使给定的一个二维数组（３×３）转置，即行列互换。
输入
一个3x3的矩阵
输出
无
样例输入
1 2 3
4 5 6
7 8 9
样例输出
1 4 7
2 5 8
3 6 9
*/
#include<stdio.h>
int main30()
{
    int i = 0;
    int j = 0;
    int t = 0;
    int a[3][3] = {0};
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i = 0;i < 3;i++)
    {
        for(j = i;j < 3;j++)
        {
            if(i != j)
            {
                t = a[i][j];
                a[i][j] = a[j][i];
                a[j][i] = t;
            }
        }
    }
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
 }
