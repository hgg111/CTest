/*
题目描述
输入10个数字，然后逆序输出。
输入
十个整数
输出
逆序输出，空格分开
样例输入
1 2 3 4 5 6 7 8 9 0
样例输出
0 9 8 7 6 5 4 3 2 1
*/
#include<stdio.h>
int main26()
{
    int i = 0;
    int a[10] = {0};
    for(i = 0;i < 10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i = 9;i >= 0;i--)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
