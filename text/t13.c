/*
��Ŀ����
��Sn=a+aa+aaa+��+aa��aaa����n��a��ֵ֮������a��һ�����֣�Ϊ2�� ���磬n=5ʱ=2+22+222+2222+22222��n�ɼ������롣

����
n

���
Sn��ֵ

��������
5
�������
24690
*/
#include<stdio.h>
int main13()
{
    int n = 0;
    int i = 0;
    int Sn = 2;
    int a[10] = {0};
    scanf("%d",&n);
    a[0] = 2;
    for(i = 1;i < n;i++)
    {
        a[i] =a[0] + a[i-1]*10;
        Sn = Sn + a[i];
    }
    printf("%d\n",Sn);
    return 0;
}
