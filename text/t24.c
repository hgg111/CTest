/*
��Ŀ����
��һ��3��3����Խ���Ԫ��֮�͡�
����
����
���
���Խ��� ���Խ��� Ԫ�غ�
��������
1 2 3
1 1 1
3 2 1
�������
3 7
*/
#include<stdio.h>

int main24()
{
    int i = 0;
    int j = 0;
    int number[3][3] = {0};
    int sum1 = 0;
    int sum2 = 0;

    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 3;j++)
        {
            scanf("%d",&number[i][j]);
        }
    }

    j = 0;
    for(i = 0;i < 3;i++)
    {
        sum1 = sum1 + a[i][j];
        j++;
    }
    j = 0;
    for(i = 2;i >= 0;i--)
    {
        sum2 = sum2 + a[i][j];
        j++;
    }s
    printf("%d %d",sum1,sum2);
    return 0;
}
