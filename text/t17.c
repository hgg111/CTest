/*
��Ŀ����
һ�������ǡ�õ��ڲ�������������������֮�ͣ�������ͳ�Ϊ"����"��
���磬6������Ϊ1��2��3����6=1+2+3�����6��"����"�� ������ҳ�N֮�ڵ��������������������ʽ���������

����
N

���
? its factors are ? ? ?

��������
1000
�������
6 its factors are 1 2 3
28 its factors are 1 2 4 7 14
496 its factors are 1 2 4 8 16 31 62 124 248
*/
#include<stdio.h>

int main17()
{
    int n = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    int sum = 0;

    scanf("%d",&n);
    for(i = 2;i <= n;i++)
    {
        sum = 0;
        for(j = 1;j < i;j++)
        {
            if(0 == (i%j))
            {
                sum = sum + j;
            }
        }
        if(i == sum)
        {
            printf("%d its factors are ",i);
            for(k = 1;k < i;k++)
            {
                if(0 == (i%k))
                {
                    printf("%d ",k);
                }
            }
            printf("\n");
        }
    }
    return 0;
}
