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
void change(char a[])
{
    int i = 0;
    int j = 0;
    char t = '\0';
    j = strlen(a);      //���ַ����ĳ���
    for(i = 0;i < j/2;i++)
    {
        t = a[i];
        a[i] = a[j-1-i];
        a[j-1-i] = t;
    }
}
int main31()
{
    char a[50] = {'\0'};
    scanf("%s",a);
    change(a);
    puts(a);
    return 0;
}
