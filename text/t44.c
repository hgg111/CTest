/*
��Ŀ����
��n��������ʹǰ�����˳�������m��λ�ã����m�������ǰ��m������дһ������ʵ�����Ϲ��ܣ���������������n����������������n������
����
�������ݵĸ���n n������ �ƶ���λ��m
���
�ƶ����n����
��������
10
1 2 3 4 5 6 7 8 9 10
2
�������
9 10 1 2 3 4 5 6 7 8
*/
#include<stdio.h>

void change(int number[],int number1[],int n,int m) //change����ʵ�ֹ��ܣ��������Ϊ��������飬m��n��������
{
    int i = 0;
    for(i = 0;i < n;i++)
    {
        if(i < m)
        {
            number1[i] = number[n - m + i];
        }
        else
        {
            number1[i] = number[i - m];
        }
    }
}

int main44()
{
    int n = 0;
    int m = 0;
    int i = 0;
    int number[100] = {0};
    int number1[100] = {0};

    scanf("%d",&n);
    for(i = 0;i < n;i++)
    {
        scanf("%d",&number[i]);
    }
    scanf("%d",&m);

    change(number,number1,n,m);

    for(i = 0;i < n;i++)
    {
        printf("%d ",number1[i]);
    }
    printf("\n");

    return 0;
}
