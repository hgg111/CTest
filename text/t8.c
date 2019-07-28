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
    int n;
    scanf("%d",&n);
    if(n >= 90)
    {
        printf("A\n");
    }
    if(n >= 80 && n < 90)
    {
        printf("B\n");
    }
    if(n >= 70 && n < 80)
    {
        printf("C\n");
    }
    if(n >= 60 && n < 70)
    {
        printf("D\n");
    }
    if(n < 60)
    {
        printf("E\n");
    }
    return 0;
}
