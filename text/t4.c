/*
题目描述
要将"China"译成密码，译码规律是：用原来字母后面的第4个字母代替原来的字母．

例如，字母"A"后面第4个字母是"E"．"E"代替"A"。因此，"China"应译为"Glmre"。

请编一程序，用赋初值的方法使cl、c2、c3、c4、c5五个变量的值分别为，’C’、’h’、’i’、’n’、’a’，经过运算，使c1、c2、c3、c4、c5分别变为’G’、’l’、’m’、’r’、’e’，并输出。

输入
China

输出
加密后的China

样例输入
China
样例输出
Glmre
*/
#include<stdio.h>

int main4()
{
    char c1 = 'C';
    char c2 = 'h';
    char c3 = 'i';
    char c4 = 'n';
    char c5 = 'a';

    printf("%c%c%c%c%c\n",c1+4,c2+4,c3+4,c4+4,c5+4);

    return 0;
}
