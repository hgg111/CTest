/*
��Ŀ����
��ѡ�񷨶�10��������С��������
����
��
���
����õ�10������
��������
4 85  3 234 45 345 345 122 30 12
�������
3
4
12
30
45
85
122
234
345
345
ѡ������ÿ���ҳ���С��������ǰ�档
*/
#include<stdio.h>
int main23()
{
    int i = 0;
    int j = 0;
    int t = 0;
    int min = 0;
    int a[10] = {0};
    for(i = 0;i < 10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i = 0;i < 10;i++)
    {
        min = a[i];
        for(j = i;j < 10;j++)
        {

            if(a[j] < min)
            {
                t = min;
                min = a[j];
                a[j] = t;
            }
        }
        a[i] = min;
    }
    for(i = 0;i < 10;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
