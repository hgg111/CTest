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
    int a[3][3] = {0};
    int sum1 = 0;
    int sum2 = 0;
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 3;j++)
        {
            if(i == j)
            {
                sum1 = sum1 + a[i][j];
            }
            if(i == 2-j)
            {
                sum2 = sum2 + a[i][j];
            }
        }
    }
    printf("%d %d",sum1,sum2);
    return 0;
}
