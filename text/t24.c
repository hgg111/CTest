/*
题目描述
求一个3×3矩阵对角线元素之和。
输入
矩阵
输出
主对角线 副对角线 元素和
样例输入
1 2 3
1 1 1
3 2 1
样例输出
3 7
*/
#include<stdio.h>
int main24()
{
    int i = 0;
    int j = 0;
    int a[3][3] = {0};
    int sum1 = 0;
    int sum2 = 0;
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 3;j++)
        {
            if(i == j)
            {
                sum1 = sum1 + a[i][j];
            }
            if(i == 2-j)
            {
                sum2 = sum2 + a[i][j];
            }
        }
    }
    printf("%d %d",sum1,sum2);
    return 0;
}
