/*
��Ŀ����
����һ�������¶ȣ�Ҫ����������¶ȡ���ʽΪ c=5(F-32)/9��ȡλ2С����

����
һ�������¶ȣ�������

���
�����¶ȣ�������λС��

��������
-40
�������
c=-40.00
*/
#include<stdio.h>
int main6()
{
    float f = 0;
    float c = 0;
    scanf("%f",&f);
    c = 5 * (f-32) / 9;
    printf("c=%4.2f",c);
    return 0;
}