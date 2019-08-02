/*
题目描述
写一函数，将一个字符串中的元音字母复制到另一个字符串，然后输出。
输入
一行字符串
输出
顺序输出其中的元音字母（aeiou）
样例输入
abcde
样例输出
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
