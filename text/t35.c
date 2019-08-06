/*
题目描述
编写一函数，由实参传来一个字符串，统计此字符串中字母、数字、空格和其它字符的个数，在主函数中输入字符串以及输出上述结果。 只要结果，别输出什么提示信息。
输入
一行字符串
输出
统计数据，4个数字，空格分开。
样例输入
!@#$%^QWERT    1234567
样例输出
5 7 4 6
*/
#include<stdio.h>
#include<string.h>

void count(char str[],int number[])  //count函数用来统计字符个数，传入参数为字符串和存放数字的数组
{
    int strlong = 0;
    int i = 0;

    strlong = strlen(str);
    for(i = 0;i < strlong;i++)
    {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            number[0]++;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            number[1]++;
        }
        else if(' ' == str[i])
        {
            number[2]++;
        }
        else
        {
            number[3]++;
        }
    }
}

int main35()
{
    char str[100] = {0};
    int number[4] = {0};
    int i = 0;

    gets(str);
    count(str,number);

    for(i = 0;i < 4;i++)
    {
        printf("%d ",number[i]);
    }
    printf("\n");

    return 0;
}
