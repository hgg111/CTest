/*
题目描述
输入两个整数，求他们相除的余数。用带参的宏来实现，编程序。
输入
a b两个数
输出
a/b的余数
样例输入
3 2
样例输出
1
*/
#include<stdio.h>
#define get_remainder(a,b) {remainder = a % b;}

int main37()
{
    int a = 0;
    int b = 0;
    int remainder = 0; //余数

    scanf("%d%d",&a,&b);
    get_remainder(a,b);
    printf("%d\n",remainder);

    return 0;
}
