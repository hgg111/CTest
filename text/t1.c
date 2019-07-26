#include<stdio.h>
#define N 2

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
int main()
{
    int a[N];
    int b[N];
    int i;
    for(i = 0;i < N;i++)
    {
        scanf("%d  %d",&a[i],&b[i]);
    }
    for(i = 0;i < N;i++)
    {
        printf("%d\n",a[i]+b[i]);
    }
    return 0;
}

