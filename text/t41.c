/*
题目描述
输入一行电报文字，将字母变成其下一字母（如’a’变成’b’……’z’变成’ａ’其它字符不变）。
输入
一行字符
输出
加密处理后的字符
样例输入
a b
样例输出
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
