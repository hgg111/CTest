/*
题目描述
给出一百分制成绩，要求输出成绩等级‘A’、‘B’、‘C’、‘D’、‘E’。 90分以及90分以上为A，80-89分为B，70-79分为C，60-69分为D，60分以下为E。
输入
一个整数0－100以内
输出
一个字符，表示成绩等级
样例输入
90
样例输出
A
*/
#include<stdio.h>

int main8()
{
    int n = 0;
    scanf("%d",&n);
    if(n < 0 || n > 100)
    {
        printf("wrong\n");
    }
    else if(n >= 90)
    {
        printf("A\n");
    }
    else if(n >= 80)
    {
        printf("B\n");
    }
    else if(n >= 70)
    {
        printf("C\n");
    }
    else if(n >= 60)
    {
        printf("D\n");
    }
    else
    {
        printf("E\n");
    }
    return 0;
}
