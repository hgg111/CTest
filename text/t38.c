/*
��Ŀ����
���������=SQRT(S*(S-a)*(S-b)*(S-c)) ����S=(a+b+c)/2��a��b��cΪ�����ε����ߡ� �����������εĺ꣬һ��������area�� ��һ����������S��
д�����ڳ������ô�ʵ�εĺ����������area��
����
a b c�����ε�������,������С����
���
���������������3λС��
��������
3 4 5
�������
6.000
*/
#include<stdio.h>
#include<math.h>
#define get_s(a,b,c) {s = (a + b + c) / 2;} //��ʵ�εĺ궨����s
#define get_area(s,a,b,c) {area = sqrt(s * (s - a) * (s - b) * (s - c));} //��ʵ�εĺ궨�������

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
