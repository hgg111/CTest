/*
��Ŀ����
����10����������������С�������һ�����Ի����������������һ�����Ի���д���������� ������10�������ڽ��д��������10������
����
10������
���
������ʮ������ÿ�������һ���ո�ע�����һ������Ҳ�пո�
��������
2 1 3 4 5 6 7 8 10 9
�������
1 2 3 4 5 6 7 8 9 10
*/
#include<stdio.h>

void input(int number[]) //��������
{
    int i = 0;
    for(i = 0;i < 10;i++)
    {
        scanf("%d",&number[i]);
    }
}

void change(int number[]) //������������
{
    int min = 0;
    int max = 0;
    int mini = 0;
    int maxi = 0;
    int t = 0;
    int i = 0;

    min = max = number[0];
    for(i = 0;i < 10;i++)
    {
        if(number[i] < min)
        {
            min = number[i];
            mini = i;
        }
        if(number[i] > max)
        {
            max = number[i];
            maxi = i;
        }
    }

    t = number[0];
    number[0] = min;
    number[mini] = t;  //����С�����һ������λ��

    if(0 == maxi)
    {
        maxi = mini;
    }        //��������Ϊ��һ����ʱ������������±�Ҫ������С�����±�

    t = number[9];
    number[9] = max;
    number[maxi] = t;  //������������һ������λ��
}

void output(int number[])  //������ݣ��������Ϊ����
{
    int i = 0;
    for(i = 0;i < 10;i++)
    {
        printf("%d ",number[i]);
    }
    printf("\n");
}

int main43()
{
    int number[10] = {0};

    input(number);
    change(number);
    output(number);

    return 0;
}
