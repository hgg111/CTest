/*
��Ŀ����
��һ�������У� 2/1 3/2 5/3 8/5 13/8 21/13...... ���������е�ǰN��֮�ͣ�������λС����
����
N
���
����ǰN���
��������
10
�������
16.48
*/
#include<stdio.h>
int main18()
{
    int n = 0;
    int i = 0;
    float Sn = 0;
    float a[100] = {0};
    float b[100] = {0};
    scanf("%d",&n);
    a[0] = 1;
    a[1] = 2;
    for(i = 2;i <= n;i++)
    {
        a[i] = a[i-1] + a[i-2];
    }
    for(i = 0;i < n;i++)
    {
        b[i] = a[i+1] / a[i];
        Sn = Sn + b[i];
    }
    printf("%4.2f\n",Sn);
    return 0;
}
