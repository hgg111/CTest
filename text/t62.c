/*
��Ŀ����
��д��������һ��������n����������ʽ��ֵ��Ҫ����͵��ú���fact(k)����k�Ľ׳ˣ���������ֵ��������double��

1+1/2+ .... +1/n!



�������5λС����

����
��
���
��
��������
5
�������
sum=1.71667
*/
#include<stdio.h>

double fact(int number)
{
    int i = 0;
    double product = 1;

    for(i = 1;i <= number;i++)
    {
        product = product * i;
    }

    return product;
}
int main62()
{
    int number = 0;
    int i = 0;
    double sum = 0;
    double factorial = 0;  // �׳�

    scanf("%d",&number);
    for(i = 1;i <= number;i++)
    {
         factorial = fact(i);
         sum = sum + (1 / factorial);
    }

    printf("sum=%.5lf\n",sum);

    return 0;
}
