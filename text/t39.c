/*
��Ŀ����
�����year������һ���꣬���б������Ƿ����ꡣ��ʾ���������Զ���ΪLEAP_YEAR���β�Ϊy���ȶ�������ʽΪ #define LEAP_YEAR(y) ��������Ƶ��ַ�����
����
һ�����
���
�����Ƿ���������������"L",�����"N"
��������
2000
�������
L
*/
#include<stdio.h>
#define leap_year(year) (0 == (year % 4) && (year % 100) != 0) || 0 == (year % 400) //�ж��Ƿ��������������

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
