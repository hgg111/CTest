/*
��Ŀ����
��Sn=1!+2!+3!+4!+5!+��+n!ֵ֮������n��һ������(n������20)��

����
n

���
Sn��ֵ

��������
5
�������
153
*/
#include<stdio.h>
int main14()
{
    int i = 0;
    int n = 0;
    long long int a[20] = {0};
    long long int Sn = 0;
    scanf("%d",&n);
    a[0] = 1;
    for(i = 1;i <= n;i++)
    {
        a[i] = a[i-1] * i;
        Sn = Sn + a[i];
    }
    printf("%lld\n",Sn);
    return 0;
}
