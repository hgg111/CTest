/*
��Ŀ����
дһ���ж������ĺ�����������������һ������������Ƿ�����������Ϣ��
����
һ����
���
������������prime ����������not prime
��������
97
�������
prime
*/
#include<stdio.h>
int prime(int n)
{
    int i = 0;
    int f = 0;
    for(i = 2;i < n;i++)
    {
        if(n%i == 0)
        {
            f = 1;
            break;
        }
    }
    return f;
}
int main29()
{
    int n = 0;
    int f = 0;
    scanf("%d",&n);
    f = prime(n);
    if(f == 1)
    {
        printf("not prime\n");
    }
    else
    {
        printf("prime\n");
    }
    return 0;
}
