/*
��Ŀ����
һ���M�׸߶��������䣬ÿ����غ󷵻�ԭ�߶ȵ�һ�룬�����¡� ���ڵ�N�����ʱ������ߣ������������ף� ������λС��
����
M N
���
���ڵ�N�����ʱ������ߣ������������ף� ������λС�����ո����������һ��
��������
1000 5
�������
31.25 2875.00
*/
#include<stdio.h>

int main19()
{
    int m = 0;
    int n = 0;
    int i = 0;
    float sum = 0;
    float bounce[100] = {0};//��ʾÿ�η����߶�

    scanf("%d%d",&m,&n);

    bounce[1] = m / 2;
    sum = m;
    for(i = 2;i <= n;i++)
    {
        bounce[i] = bounce[i-1] / 2;
        sum = sum + (2*bounce[i-1]);
    }

    printf("%4.2f %4.2f",bounce[n],sum);
    return 0;
}
