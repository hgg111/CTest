/*
��Ŀ����
��дһ����������a��b��c����ֵ������������ֵ��
����
һ�����飬�ֱ�Ϊa b c
���
a b c����������
��������
10 20 30
�������
30
*/
#include<stdio.h>
int main3()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int max = 0;
    scanf("%d%d%d",&a,&b,&c);
    if(a >= b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    if(max < c)
    {
        max = c;
    }
    printf("%d",max);
    return 0;
}
