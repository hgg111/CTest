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
    int number[3][3] = {0};

    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 3;j++)
        {
            scanf("%d",&number[i][j]);
        }
    }

    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 3;j++)
        {
            if(i != j)
            {
                printf("%d ",number[j][i]);  //不是对角线上的点要换成与之对称的数
            }
            else
            {
                printf("%d ",number[i][j]);  //对角线上的点直接输出
            }
        }
        printf("\n");
    }
    return 0;
 }
