/*
��Ŀ����
����һ�����εĺ꣬ʹ����������ֵ��������д������������������Ϊʹ�ú�ʱ��ʵ�Ρ�����ѽ����������ֵ��
����
���������ո����
���
����������������ո����
��������
1 2
�������
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