/*
��Ŀ����
�ֱ��ú����ʹ��εĺ꣬�����������ҳ���������
����
3��ʵ��
���
������,������飬���ú��������úꡣ ����3λС����
��������
1 2 3
�������
3.000
3.000
*/
#include<stdio.h>
#define get_max2(num1,num2,num3) {max = num1;if(num2 > max) {max = num2;};if(num3 > max) {max = num3;};} //�ú궨��get_max2�ҳ������

void get_max1(float num1,float num2,float num3) //�ú���get_max1�ҳ������������������������������
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
