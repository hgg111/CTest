/*输入两个整数a和b，计算a+b的和
输入两个整数A和B

范围不超过2^10

输出
求A+B

样例输入
1 1
10 20

样例输出
2
30
*/
#include<stdio.h>

int main1()
{
    int a = 0;
    int b = 0;

    while(~scanf("%d%d",&a,&b))
    {
        printf("%d\n",a+b);
    }

    return 0;
}

