/*
��Ŀ����
дһ��������һ���ַ����е�Ԫ����ĸ���Ƶ���һ���ַ�����Ȼ�������
����
һ���ַ���
���
˳��������е�Ԫ����ĸ��aeiou��
��������
abcde
�������
ae
*/
#include<stdio.h>
#include<string.h>
void find(char str1[],char str2[])
{
    int i = 0;
    int j = 0;
    int longstr1 = 0;

    longstr1 = strlen(str1);
    for(i = 0;i < longstr1;i++)
    {
        if('a' == str1[i] || 'e' == str1[i] || 'i' == str1[i] || 'o' == str1[i] || 'u' == str1[i])
        {
            str2[j] = str1[i];
            j++;
        }
    }
}
int main33()
{
    char str1[100] = {0};
    char str2[100] = {0};

    gets(str1);
    find(str1,str2);
    puts(str2);

    return 0;
}
