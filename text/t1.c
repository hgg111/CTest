#include<stdio.h>
#define N 2

/*������������a��b������a+b�ĺ�
������������A��B

��Χ������2^10

���
��A+B

��������
1 1
10 20

�������
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

