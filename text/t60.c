/*
��Ŀ����
����һ��������n (1�� n ��6),������һ��n ��n�еľ����ҳ��þ����о���ֵ����Ԫ���Լ��������±�����±ꡣ

����
n

nxn

���
�� �� ��

��������
2
1 2
3 4
�������
4 2 2
*/
#include<stdio.h>

int main60()
{
    int number = 0;
    int i = 0;
    int j = 0;
    int max = 0;
    int maxi = 0;
    int maxj = 0;
    int data[7][7] = {0};

    scanf("%d",&number);
    for(i = 1;i <= number;i++)
    {
        for(j = 1;j <= number;j++)
        {
            scanf("%d",&data[i][j]);
            if(data[i][j] > max)
            {
                max = data[i][j];
                maxi = i;
                maxj = j;
            }
        }
    }

    printf("%d %d %d\n",max,maxi,maxj);

    return 0;
}
