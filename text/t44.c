/*
题目描述
有n个整数，使前面各数顺序向后移m个位置，最后m个数变成前面m个数。写一函数：实现以上功能，在主函数中输入n个数和输出调整后的n个数。
输入
输入数据的个数n n个整数 移动的位置m
输出
移动后的n个数
样例输入
10
1 2 3 4 5 6 7 8 9 10
2
样例输出
9 10 1 2 3 4 5 6 7 8
*/
#include<stdio.h>

void change(int number[],int number1[],int n,int m) //change函数实现功能，传入参数为输入的数组，m，n和新数组
{
    int i = 0;
    for(i = 0;i < n;i++)
    {
        if(i < m)
        {
            number1[i] = number[n - m + i];
        }
        else
        {
            number1[i] = number[i - m];
        }
    }
}

int main44()
{
    int n = 0;
    int m = 0;
    int i = 0;
    int number[100] = {0};
    int number1[100] = {0};

    scanf("%d",&n);
    for(i = 0;i < n;i++)
    {
        scanf("%d",&number[i]);
    }
    scanf("%d",&m);

    change(number,number1,n,m);

    for(i = 0;i < n;i++)
    {
        printf("%d ",number1[i]);
    }
    printf("\n");

    return 0;
}
