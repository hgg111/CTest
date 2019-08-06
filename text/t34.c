/*
题目描述
写一函数，输入一个四位数字，要求输出这四个数字字符，但每两个数字间空格。如输入1990，应输出"1 9 9 0"。
输入
一个四位数
输出
增加空格输出
样例输入
1990
样例输出
1 9 9 0
*/
#include<stdio.h>

void addSpace(int number)  //addSpace函数用来增加空格输出，传入的参数为输入的整数
{
    int digit1 = 0;
    int digit2 = 0;
    int digit3 = 0;
    int digit4 = 0;

    digit1 = number / 1000;
    digit2 = (number / 100) % 10;
    digit3 = (number / 10) % 10;
    digit4 = number % 10;

    printf("%d %d %d %d\n",digit1,digit2,digit3,digit4);
}

int main34()
{
    int number = 0;

    scanf("%d",&number);
    addSpace(number);

    return 0;
}

