/*
��Ŀ����
д�����������ֱ����������������Լ������С�������������������������������������������������ɼ������롣
����
������
���
���Լ�� ��С������
��������
6 15
�������
3 30
*/
#include<stdio.h>

int max(int num1,int num2)//�ҳ��������������Լ��
{
    int i = 0;
    int m = 0;
    int n = 0;
    int k[100] = {0};

    if(num1 > num2)
    {
        m = num1;
        n = num2;
    }
    else
    {
        m = num2;
        n = num1;
    }
    k[0] = m % n;
    if(0 == k[0])
    {
        return n;
    }
    k[1] = k[0] % n;
    if(0 == k[1])
    {
        return n;
    }
    for(i = 0;i < 100;i++)
    {
        k[i+2] = k[i+1] % k[i];
        if(0 == k[i+2])
        {
            return k[i];
        }
    }
    return 0;
}

int min(int num1,int num2,int divisor)
{
    int n = 0;
    n = (num1 / divisor) * (num2 / divisor) * divisor;
    return n;
}

int main27()
{
    int num1 = 0;
    int num2 = 0;
    int multiple = 0;//��С������
    int divisor = 0;//���Լ��

    scanf("%d%d",&num1,&num2);
    divisor = max(num1,num2);
    multiple = min(num1,num2,divisor);
    printf("%d %d\n",divisor,multiple);
    return 0;
}
