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
    int number[3][3] = {0};

    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 3;j++)
        {
            scanf("%d",&number[i][j]);
        }
    }

    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 3;j++)
        {
            if(i != j)
            {
                printf("%d ",number[j][i]);  //���ǶԽ����ϵĵ�Ҫ������֮�ԳƵ���
            }
            else
            {
                printf("%d ",number[i][j]);  //�Խ����ϵĵ�ֱ�����
            }
        }
        printf("\n");
    }
    return 0;
 }
