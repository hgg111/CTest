/*题目描述
请参照本章例题，编写一个C程序，输出以下信息：

**************************
Hello World!
**************************

Hello与World之间有一个空格

*也是输出的一部分，别光打印Hello World！

输入
无需输入

输出
**************************
Hello World!
**************************

样例输入
无
样例输出
**************************
Hello World!
**************************
*/
#include<stdio.h>

int main2()
{
    int i = 0;

    for(i = 0;i < 26;i++)
    {
        printf("*");
    }
    printf("\n");
    printf("Hello World!\n");
    for(i = 0;i < 26;i++)
    {
        printf("*");
    }
    printf("\n");

    return 0;
}
