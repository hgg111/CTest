/*
题目描述
输入三个字符串，按由小到大的顺序输出
输入
3行字符串
输出
按照从小到大输出成3行
样例输入
cde
afg
abc
样例输出
abc
afg
cde
*/
#include<stdio.h>

void get_min(char str1[],char str2[])  //get_main函数用来判断str1与str2的大小，并且将小的一组字符串存入str1，大的一组字符串存入str2
{
    int i = 0;
    int j = 0;
    char t = 0;
    for(i = 0;i < 100;i++)
    {
        if(str1[i] > str2[i])
        {
            for(j = 0;(str1[j] != 0) && (str2[j] != 0);j++)
            {
                t = str1[j];
                str1[j] = str2[j];
                str2[j] = t;
            }
            break;
        }
        else if(str1[i] == str2[i])
        {
            continue;
        }
        else
        {
            break;
        }
    }
}

int main42()
{
    char str1[100] = {0};
    char str2[100] = {0};
    char str3[100] = {0};

    gets(str1);
    gets(str2);
    gets(str3);
    get_min(str1,str2);
    get_min(str1,str3);
    get_min(str2,str3);
    puts(str1);
    puts(str2);
    puts(str3);

    return 0;
}
