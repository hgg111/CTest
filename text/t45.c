/*
��Ŀ����
��n��Χ��һȦ��˳���źš��ӵ�1���˿�ʼ��������1��3��������������3�����˳�Ȧ�ӣ���������µ���ԭ���ĵڼ��ŵ���λ��
����
��ʼ����n
���
���һ�˵ĳ�ʼ���
��������
3
�������
2
*/
#include<stdio.h>

void findLast(int n,int number[],int j,int newn) //findLast����������һ����
{
    int i = 0;
    int newn1 = 0; //��ʾ��ǰ�����ĸ���

    newn1 = newn;
    for(i = 1;i <= n;i++)
    {
        if(0 == number[i])
        {
            j++;
        }
        if(3 == j)       //ÿ�ε���������Ϊ1��ʣ��newn1--����
        {
            number[i] = 1;
            j = 0;
            newn1--;
        }
    }
    if(newn > 1)
    {
        findLast(n,number,j,newn1);  //���ʣ���������1�������ѭ��
    }
}

int main45()
{
    int n = 0;
    int i = 0;
    int j = 0;
    int number[100] = {0};

    scanf("%d",&n);
    findLast(n,number,j,n);

    for(i = 1;i <= n;i++)    //�����б�Ϊ0����������Ϊʣ������һ����ԭ�������
    {
        if(0 == number[i])
        {
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}
