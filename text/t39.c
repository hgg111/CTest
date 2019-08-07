/*
题目描述
给年份year，定义一个宏，以判别该年份是否闰年。提示：宏名可以定义为LEAP_YEAR，形参为y，既定义宏的形式为 #define LEAP_YEAR(y) （读者设计的字符串）
输入
一个年份
输出
根据是否闰年输出，是输出"L",否输出"N"
样例输入
2000
样例输出
L
*/
#include<stdio.h>
#define leap_year(year) (0 == (year % 4) && (year % 100) != 0) || 0 == (year % 400) //判断是否满足闰年的条件

int main39()
{
    int year = 0;

    scanf("%d",&year);
    leap_year(year);
    if(leap_year(year))
    {
        printf("L\n");
    }
    else
    {
        printf("N\n");
    }

    return 0;
}
