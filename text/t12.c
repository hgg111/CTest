/*
��Ŀ����
����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ�����֡��ո�������ַ��ĸ�����

����
һ���ַ�

���
ͳ��ֵ

��������
aklsjflj123 sadf918u324 asdf91u32oasdf/.';123
�������
23 16 2 4
*/
#include<stdio.h>

int main12()
{
    char s[100];
    int i = 0;
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    int n4 = 0;

    gets(s);          //������пո���ַ���ʱҪ��gets()
    for(i = 0;s[i] != 0;i++)
    {
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            n1++;
        }
        else if(s[i] >= '0' && s[i] <= '9')
        {
            n2++;
        }
        else if(s[i] == ' ')
        {
            n3++;
        }
        else
        {
            n4++;
        }
    }
    printf("%d %d %d %d\n",n1,n2,n3,n4);
    return 0;
}
