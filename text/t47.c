/*
题目描述
定义一个结构体变量（包括年、月、日）。计算该日在本年中是第几天，注意闰年问题。
输入
年月日
输出
当年第几天
样例输入
2000 12 31
样例输出
366
*/
#include<stdio.h>

typedef struct time
{
    int year;
    int month;
    int day;
}; // 定义结构体保存时间

int main47()
{
    struct time time1;
    int sumday = 0;
    int i = 0;
    int monthday[12] = {0};

    scanf("%d%d%d",&time1.year,&time1.month,&time1.day);    // 给结构体赋值

    monthday[1] = 31;
    if((0 == (time1.year % 4) && ((time1.year %100) != 0)) || (0 == time1.year % 400))
    {
        monthday[2] = 29;
    }
    else
    {
        monthday[2] = 28;
    }
    for(i = 3;i <= 12;i++)
    {
        if((3 == i) || (5 == i) || (7 == i) || (8 == i) || (10 == i) || (12 == i))
        {
            monthday[i] = 31;
        }
        else
        {
            monthday[i] = 30;
        }
    }                   // 保存每一月的天数

    for(i = 1;i < time1.month;i++)
    {
        sumday = sumday + monthday[i];
    }
    sumday = sumday + time1.day;
    printf("%d",sumday);

    return 0;
}
