/*
��Ŀ����
дһ������ʹ�����һ���ַ����������ţ�������������������������ַ������������ո񣩡�
����
һ���ַ�
���
�������ַ���
��������
123456abcdef
�������
fedcba654321
*/
#include<stdio.h>
#include<string.h>

void change(char str[])
{
    int i = 0;
    int j = 0;
    char t = 0;

    j = strlen(str);    //���ַ����ĳ���
    for(i = j - 1;i >= 0;i--)
    {
        printf("%c",str[i]);
    }
}

int main31()
{
    char str[100] = {0};
    scanf("%s",str);
    change(str);
    return 0;
}
