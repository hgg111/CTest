/*
��Ŀ����
д�����������ֱ����������������Լ������С�������������������������������������������������ɼ������롣
����
������
���
���Լ�� ��С������
��������
6 15
�������
3 30
*/
#include<stdio.h>
int max(int a,int b)
{
    int i = 0;
    int m = 0;
    int n = 0;
    int k[100] = {0};
    if(a > b)
    {
        m = a;
        n = b;
    }
    else
    {
        m = b;
        n = a;
    }
    k[0] = m % n;
    if(k[0] == 0)
    {
        return n;
    }
    k[1] = k[0] % n;
    if(k[1] == 0)
    {
        return n;
    }
    for(i = 0;i < 100;i++)
    {
        k[i+2] = k[i+1] % k[i];
        if(k[i+2] == 0)
        {
            return k[i];
        }
    }
    return 0;
}
int min(int a,int b,int m)
{
    int n = 0;
    n = a/m * b/m * m;
    return n;
}
int main27()
{
    int a = 0;
    int b = 0;
    int n = 0;
    int m = 0;
    scanf("%d%d",&a,&b);
    m = max(a,b);
    n = min(a,b,m);
    printf("%d %d\n",m,n);
    return 0;
}
