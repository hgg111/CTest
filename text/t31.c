/*
题目描述
写一函数，使输入的一个字符串按反序存放，在主函数中输入输出反序后的字符串（不包含空格）。
输入
一行字符
输出
逆序后的字符串
样例输入
123456abcdef
样例输出
fedcba654321
*/
#include<stdio.h>
#include<string.h>

void change(char str[])
{
    int i = 0;
    int j = 0;
    char t = 0;

    j = strlen(str);    //求字符串的长度
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
