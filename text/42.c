/*
��Ŀ����
���������ַ���������С�����˳�����
����
3���ַ���
���
���մ�С���������3��
��������
cde
afg
abc
�������
abc
afg
cde
*/
#include<stdio.h>

void get_min(char str1[],char str2[])  //get_main���������ж�str1��str2�Ĵ�С�����ҽ�С��һ���ַ�������str1�����һ���ַ�������str2
{
    int i = 0;
    int j = 0;
    char t = 0;
    for(i = 0;i < 100;i++)
    {
        if(str1[i] > str2[i])
        {
            for(j = 0;(str1[j] != 0) && (str2[j] != 0);j++)
            {
                t = str1[j];
                str1[j] = str2[j];
                str2[j] = t;
            }
            break;
        }
        else if(str1[i] == str2[i])
        {
            continue;
        }
        else
        {
            break;
        }
    }
}

int main42()
{
    char str1[100] = {0};
    char str2[100] = {0};
    char str3[100] = {0};

    gets(str1);
    gets(str2);
    gets(str3);
    get_min(str1,str2);
    get_min(str1,str3);
    get_min(str2,str3);
    puts(str1);
    puts(str2);
    puts(str3);

    return 0;
}
