/*
��Ŀ����
����һ���ṹ������������ꡢ�¡��գ�����������ڱ������ǵڼ��죬ע���������⡣
����
������
���
����ڼ���
��������
2000 12 31
�������
366
*/
#include<stdio.h>

typedef struct time
{
    int year;
    int month;
    int day;
}; // ����ṹ�屣��ʱ��

int main47()
{
    struct time time1;
    int sumday = 0;
    int i = 0;
    int monthday[12] = {0};

    scanf("%d%d%d",&time1.year,&time1.month,&time1.day);    // ���ṹ�帳ֵ

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
    }                   // ����ÿһ�µ�����

    for(i = 1;i < time1.month;i++)
    {
        sumday = sumday + monthday[i];
    }
    sumday = sumday + time1.day;
    printf("%d",sumday);

    return 0;
}
