/*
题目描述
编程，输入一个１０进制正整数，然后输出它所对应的八进制数。

输入
无
输出
无
样例输入
10
样例输出
12
*/
#include<stdio.h>

int main53()
{
    int decimalism = 0;  // 十进制的数
    int octonary = 0;    // 八进制的数
    int remainder = 0;
    int count = 0;
    int i = 0;

    scanf("%d",&decimalism);

    while((decimalism / 8) != 0)
    {
        remainder = decimalism % 8;
        decimalism = decimalism / 8;
        count++;
        for(i = 1;i < count;i++)
        {
            remainder = remainder * 10;
        }
        octonary = octonary + remainder;
    }           // 求出除最高位的每一位余数并按倒序排列存放在octonary中
    remainder = decimalism % 8;
    for(i = 1;i < (count + 1);i++)
    {
        remainder = remainder * 10;
    }
    octonary = octonary + remainder;  // 将八进制的最高位求出

    printf("%d\n",octonary);

    return 0;
}
