/*
��Ŀ����
��������������m��n���������Լ������С��������
����
��������
���
���Լ������С������
��������
5 7
�������
1 35
*/
#include<stdio.h>

int main11()
{
    int m = 0;
    int n = 0;
    int k = 0;  //kΪm,n�н�Сֵ
    int i = 0;
    int max = 0;
    int min = 0;

    scanf("%d%d",&m,&n);
    if(m > n)
    {
        k = n;
    }
    else
    {
        k = m;
    }
    for(i = 1;i <= k;i++)
    {
        if((0 == (m%i)) && (0 == (n%i)))
        {
            max = i;
        }
    }
    min = max * (m/max) * (n/max);
    printf("%d %d\n",max,min);
    return 0;
}
