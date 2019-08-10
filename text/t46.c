/*
题目描述
有一字符串，包含n个字符。写一函数，将此字符串中从第m个字符开始的全部字符复制成为另一个字符串。
输入
数字n 一行字符串 数字m
输出
从m开始的子串
样例输入
6
abcdef
3
样例输出
cdef
*/
#include<stdio.h>

void get_str1(char str[],char str1[],int number,int number1) //get_str1函数用来得到复制的函数
{
    int i = 0;

    for(i = 0;i < number;i++)
    {
        str1[i] = str[number1 + i - 1];
    }
}

int main46()
{
    int number = 0;
    int number1 = 0;
    char str[100] = {0};
    char str1[100] = {0};

    scanf("%d",&number);
    scanf("%s",str);
    scanf("%d",&number1);

    get_str1(str,str1,number,number1);
    puts(str1);
    return 0;
}
