/*
��Ŀ����
дһ�������������ַ�������
����
�����ַ���
���
���Ӻ���ַ���
��������
123
abc
�������
123abc
*/
#include<stdio.h>
#include<string.h>

void sum(char a[],char b[])
{
    int i = 0;
    int la = 0;
    int lb = 0;
    la = strlen(a);
    lb = strlen(b);
    for(i = 0;i < lb;i++)
    {
        a[i+la] = b[i];
    }
}

int main32()
{
    char a[10] = {'\0'};
    char b[10] = {'\0'};
    gets(a);
    gets(b);
    sum(a,b);
    puts(a);
    return 0;
}
