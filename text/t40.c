/*
题目描述
分别用函数和带参的宏，从三个数中找出最大的数。
输入
3个实数
输出
最大的数,输出两遍，先用函数，再用宏。 保留3位小数。
样例输入
1 2 3
样例输出
3.000
3.000
*/
#include<stdio.h>
#define get_max2(num1,num2,num3) {max = num1;if(num2 > max) {max = num2;};if(num3 > max) {max = num3;};} //用宏定义get_max2找出最大数

void get_max1(float num1,float num2,float num3) //用函数get_max1找出最大数，传入三个整数，输出最大数
{
    float max = num1;
    if(num2 > max)
    {
        max = num2;
    }
    if(num3 > max)
    {
        max = num3;
    }
    printf("%4.3f\n",max);
}

int main40()
{
    float num1 = 0;
    float num2 = 0;
    float num3 = 0;
    float max = 0;

    scanf("%f%f%f",&num1,&num2,&num3);
    get_max1(num1,num2,num3);

    get_max2(num1,num2,num3);
    printf("%4.3f\n",max);

    return 0;
}
