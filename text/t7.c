/*
��Ŀ����
��һ������
y={ x      x<1
    2x-1   1<=x<10
    3x-11  x>=10

дһ�γ�������x�����y

����
һ����x

���
һ����y

��������
14
�������
31
*/
#include<stdio.h>
int main7()
{
    int x = 0;
    int y = 0;
    scanf("%d",&x);
    if(x < 1)
    {
        y = x;
    }
    else if(x >= 1 && x < 10)
    {
        y = 2*x - 1;
    }
    else
    {
        y = 3*x - 11;
    }
    printf("%d",y);
    return 0;
}
