/*
��Ŀ����
��������������m��n(m<n)����m��n֮��(����m��n)���������ĺͣ�Ҫ���岢���ú���isprime(x)���ж�x�Ƿ�Ϊ����(�����ǳ�1����ֻ�ܱ�������������Ȼ��)��


����
m n

���
������

��������
2 3
�������
5
*/
#include<stdio.h>

int isprime(int number)   // isprime���������ж��Ƿ�Ϊ����������Ĳ���Ϊ��ǰ����number
{
    int i = 0;

    if(1 == number)
    {
        return 0;
    }
    for(i = 2;i < number;i++)
    {
        if(0 == (number % i))
        {
            return 0;
        }
    }

    return 1;
}
int main52()
{
    int number1 = 0;
    int number2 = 0;
    int i = 0;
    int sum = 0;
    int f = 0;

    scanf("%d%d",&number1,&number2);

    for(i = number1;i <= number2;i++)
    {
        f = isprime(i);
        if(1 == f)
        {
            sum = sum + i;
        }
    }

    printf("%d",sum);

    return 0;
}
