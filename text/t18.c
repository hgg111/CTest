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
    float number[100] = {0};
    float fraction[100] = {0}; //����

    scanf("%d",&n);
    number[0] = 1;
    number[1] = 2;
    for(i = 2;i <= n;i++)
    {
        number[i] = number[i-1] + number[i-2];
    }
    for(i = 0;i < n;i++)
    {
        fraction[i] = number[i+1] / number[i];
        Sn = Sn + fraction[i];
    }

    printf("%4.2f\n",Sn);
    return 0;
}
