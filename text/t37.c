/*
��Ŀ����
��������������������������������ô��εĺ���ʵ�֣������
����
a b������
���
a/b������
��������
3 2
�������
1
*/
#include<stdio.h>
#define get_remainder(a,b) {remainder = a % b;}

int main37()
{
    int a = 0;
    int b = 0;
    int remainder = 0; //����

    scanf("%d%d",&a,&b);
    get_remainder(a,b);
    printf("%d\n",remainder);

    return 0;
}
