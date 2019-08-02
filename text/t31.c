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
void change(char a[])
{
    int i = 0;
    int j = 0;
    char t = '\0';
    j = strlen(a);      //求字符串的长度
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
