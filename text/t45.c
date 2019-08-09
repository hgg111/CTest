/*
题目描述
有n人围成一圈，顺序排号。从第1个人开始报数（从1到3报数），凡报到3的人退出圈子，问最后留下的是原来的第几号的那位。
输入
初始人数n
输出
最后一人的初始编号
样例输入
3
样例输出
2
*/
#include<stdio.h>

void findLast(int n,int number[],int j,int newn) //findLast函数求出最后一个数
{
    int i = 0;
    int newn1 = 0; //表示当前整数的个数

    newn1 = newn;
    for(i = 1;i <= n;i++)
    {
        if(0 == number[i])
        {
            j++;
        }
        if(3 == j)       //每次第三个数标为1，剩余newn1--个数
        {
            number[i] = 1;
            j = 0;
            newn1--;
        }
    }
    if(newn > 1)
    {
        findLast(n,number,j,newn1);  //如果剩余的数大于1，则继续循环
    }
}

int main45()
{
    int n = 0;
    int i = 0;
    int j = 0;
    int number[100] = {0};

    scanf("%d",&n);
    findLast(n,number,j,n);

    for(i = 1;i <= n;i++)    //数组中标为0的数的坐标为剩余的最后一个数原来的序号
    {
        if(0 == number[i])
        {
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}
