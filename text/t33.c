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
void find(char a[],char b[])
{
    int i = 0;
    int j = 0;
    int l = 0;
    l = strlen(a);
    for(i = 0;i < l;i++)
    {
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
        {
            b[j] = a[i];
            j++;
        }
    }
}
int main33()
{
    char a[50] = {'\0'};
    char b[50] = {'\0'};
    gets(a);
    find(a,b);
    puts(b);
    return 0;
}
