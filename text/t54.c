/*
题目描述
编制程序，输入n个整数（n从键盘输入，n>0），输出它们的偶数和。

输入
无
输出
无
样例输入
2
1 2
样例输出
2
*/
#include<stdio.h>

int main54()
{
    int number = 0;
    int data = 0;
    int i = 0;
    int sum = 0;

    scanf("%d",&number);
    for(i = 0;i < number;i++)
    {
        scanf("%d",&data);
        if(0 == (data % 2))
        {
            sum = sum + data;
        }
    }

    printf("%d\n",sum);

    return 0;
}
