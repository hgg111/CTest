/*
��Ŀ����
��һ�ַ���������n���ַ���дһ�����������ַ����дӵ�m���ַ���ʼ��ȫ���ַ����Ƴ�Ϊ��һ���ַ�����
����
����n һ���ַ��� ����m
���
��m��ʼ���Ӵ�
��������
6
abcdef
3
�������
cdef
*/
#include<stdio.h>

void get_str1(char str[],char str1[],int number,int number1) //get_str1���������õ����Ƶĺ���
{
    int i = 0;

    for(i = 0;i < number;i++)
    {
        str1[i] = str[number1 + i - 1];
    }
}

int main46()
{
    int number = 0;
    int number1 = 0;
    char str[100] = {0};
    char str1[100] = {0};

    scanf("%d",&number);
    scanf("%s",str);
    scanf("%d",&number1);

    get_str1(str,str1,number,number1);
    puts(str1);
    return 0;
}
