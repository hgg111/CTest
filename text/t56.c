/*
��Ŀ����
���10��1000֮����ͬʱ��2��3��7�����������������

ÿ��һ����

����
��
���
��
��������
��
�������
��
*/
#include<stdio.h>

int main56()
{
    int number = 0;

    for(number = 10;number <= 1000;number++)
    {
        if((0 == (number % 2)) && (0 == (number % 3)) && (0 == (number % 7)))
        {
            printf("%d\n",number);
        }
    }

    return 0;
}
