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
    int a = 0;
    int b = 0;
    int k = 0;
    int i = 0;
    int max = 0;
    int min = 0;
    scanf("%d%d",&a,&b);
    if(a > b)
    {
        k = b;
    }
    else {k = a;}
    for(i = 1;i <= k;i++)
    {
        if((a%i == 0) && (b%i == 0))
        {
            max = i;
        }
    }
    min = max * (a/max) * (b/max);
    printf("%d %d\n",max,min);
    return 0;
}
