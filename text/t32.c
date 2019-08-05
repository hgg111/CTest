/*
题目描述
写一函数，将两个字符串连接
输入
两行字符串
输出
链接后的字符串
样例输入
123
abc
样例输出
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
