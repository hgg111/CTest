/*
��Ŀ����
��дһ��������ʵ�δ���һ���ַ�����ͳ�ƴ��ַ�������ĸ�����֡��ո�������ַ��ĸ��������������������ַ����Լ������������� ֻҪ����������ʲô��ʾ��Ϣ��
����
һ���ַ���
���
ͳ�����ݣ�4�����֣��ո�ֿ���
��������
!@#$%^QWERT    1234567
�������
5 7 4 6
*/
#include<stdio.h>
#include<string.h>

void count(char str[],int number[])  //count��������ͳ���ַ��������������Ϊ�ַ����ʹ�����ֵ�����
{
    int strlong = 0;
    int i = 0;

    strlong = strlen(str);
    for(i = 0;i < strlong;i++)
    {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            number[0]++;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            number[1]++;
        }
        else if(' ' == str[i])
        {
            number[2]++;
        }
        else
        {
            number[3]++;
        }
    }
}

int main35()
{
    char str[100] = {0};
    int number[4] = {0};
    int i = 0;

    gets(str);
    count(str,number);

    for(i = 0;i < 4;i++)
    {
        printf("%d ",number[i]);
    }
    printf("\n");

    return 0;
}
