/*
题目描述
三角形面积=SQRT(S*(S-a)*(S-b)*(S-c)) 其中S=(a+b+c)/2，a、b、c为三角形的三边。 定义两个带参的宏，一个用来求area， 另一个宏用来求S。
写程序，在程序中用带实参的宏名来求面积area。
输入
a b c三角形的三条边,可以是小数。
输出
三角形面积，保留3位小数
样例输入
3 4 5
样例输出
6.000
*/
#include<stdio.h>
#include<math.h>
#define get_s(a,b,c) {s = (a + b + c) / 2;} //带实参的宏定义求s
#define get_area(s,a,b,c) {area = sqrt(s * (s - a) * (s - b) * (s - c));} //带实参的宏定义求面积

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    float s = 0;
    float area = 0;

    scanf("%d%d%d",&a,&b,&c);
    get_s(a,b,c);
    get_area(s,a,b,c);
    printf("%4.3f",area);

    return 0;
}
