/*
��Ŀ����
дһ����������һ����λ���֣�Ҫ��������ĸ������ַ�����ÿ�������ּ�ո�������1990��Ӧ���"1 9 9 0"��
����
һ����λ��
���
���ӿո����
��������
1990
�������
1 9 9 0
*/
#include<stdio.h>

void addSpace(int number)  //addSpace�����������ӿո����������Ĳ���Ϊ���������
{
    int digit1 = 0;
    int digit2 = 0;
    int digit3 = 0;
    int digit4 = 0;

    digit1 = number / 1000;
    digit2 = (number / 100) % 10;
    digit3 = (number / 10) % 10;
    digit4 = number % 10;

    printf("%d %d %d %d\n",digit1,digit2,digit3,digit4);
}

int main34()
{
    int number = 0;

    scanf("%d",&number);
    addSpace(number);

    return 0;
}

