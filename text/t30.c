/*
��Ŀ����
дһ��������ʹ������һ����ά���飨��������ת�ã������л�����
����
һ��3x3�ľ���
���
��
��������
1 2 3
4 5 6
7 8 9
�������
1 4 7
2 5 8
3 6 9
*/
#include<stdio.h>
int main30()
{
    int i = 0;
    int j = 0;
    int t = 0;
    int a[3][3] = {0};
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i = 0;i < 3;i++)
    {
        for(j = i;j < 3;j++)
        {
            if(i != j)
            {
                t = a[i][j];
                a[i][j] = a[j][i];
                a[j][i] = t;
            }
        }
    }
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
 }
