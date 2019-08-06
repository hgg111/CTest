/*
题目描述
定义一个带参的宏，使两个参数的值互换，并写出程序，输入两个数作为使用宏时的实参。输出已交换后的两个值。
输入
两个数，空格隔开
输出
交换后的两个数，空格隔开
样例输入
1 2
样例输出
2 1
*/
#include<stdio.h>
#define swap(a,b) {t = a;a = b;b = t;}

int main36()
{
    int a = 0;
    int b = 0;
    int t = 0;

    scanf("%d%d",&a,&b);
    swap(a,b);
    printf("%d %d\n",a,b);

    return 0;
}
