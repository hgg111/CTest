/*
��Ŀ����
�Ӽ�����������20����������ͳ�����еĸ���������������������ƽ��ֵ��

������λС��

����
��
���
��
��������
1 2 3 4 5 6 7 8 9 10
-1 -2 -3 -4 -5 -6 -7 -8 -9 -10
�������
10
5.50
*/
#include<stdio.h>

int main57()
{
    int number[20] = {0};
    int i = 0;
    int negative = 0;     // �����ĸ���
    int positive = 0;     // �����ĸ���
    float sum = 0;
    float average = 0;

    for(i = 0;i < 20;i++)
    {
        scanf("%d",&number[i]);
        if(number[i] < 0)
        {
            negative++;
        }
        else
        {
            positive++;
            sum = sum + number[i];
        }
    }

    average = sum / positive;
    printf("%d\n%4.2f\n",negative,average);

    return 0;
}
