/*
��Ŀ����
����һ�е籨���֣�����ĸ�������һ��ĸ���硯a����ɡ�b��������z����ɡ��ᡯ�����ַ����䣩��
����
һ���ַ�
���
���ܴ������ַ�
��������
a b
�������
b c
*/
#include<stdio.h>
#include<string.h>

int main41()
{
    char str[100] = {0};
    int strlength = 0;
    int i = 0;

    gets(str);
    strlength = strlen(str);
    for(i = 0;i < strlength;i++)
    {
        if((str[i] >= 'a') && (str[i] < 'z'))
        {
            printf("%c",str[i]+1);
        }
        else if('z' == str[i])
        {
            printf("a");
        }
        else
        {
            printf("%c",str[i]);
        }
    }
    printf("\n");

    return 0;
}
