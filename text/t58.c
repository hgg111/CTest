/*
��Ŀ����
����һ������x��һ��������n����������ʽ��ֵ��Ҫ�����������ú�����fact(n)����n�Ľ׳ˣ�mypow(x,n)����x��n���ݣ���xn�������������ķ���ֵ������double��

      x - x2/2! + x3/3! + ... + (-1)n-1xn/n!

���������4λС����

����
x n

���
���к�

��������
2.0 3
�������
1.3333
*/

#include<stdio.h>

/********************************************
�������ƣ�mypow
����������number1��number2����
���������������number1������number2
����ֵ������number1��number2����nownumber
********************************************/

double mypow(double number1,int number2)
{
    int i = 0;
    double nownumber = 1.0;

    for(i = 1;i <= number2;i++)
    {
        nownumber = number1 * nownumber;
    }

    return nownumber;
}

/********************************************
�������ƣ�fact
����������number2�Ľ׳�
���������������number2
����ֵ������number2�Ľ׳�nownumber
********************************************/

double fact(int number2)
{
    int i = 0;
    double nownumber = 1.0;

    for(i = 1;i <= number2;i++)
    {
        nownumber = nownumber * i;
    }

    return nownumber;
}

int main58()
{
    double number1 = 0;
    int number2 = 0;
    int i = 0;
    int f = -1;
    double numerator = 0;    // �����ķ���
    double denominator = 0;  // �����ķ�ĸ
    double sum = 0;

    scanf("%lf%d",&number1,&number2);

    for(i = 1;i <= number2;i++)
    {
        f = f * (-1); // �����жϸ��������
        numerator = mypow(number1,i);
        denominator = fact(i);
        sum = sum + ((numerator / denominator) * f);
    }

    printf("%.4lf\n",sum);

    return 0;
}
