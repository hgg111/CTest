/*
��Ŀ����
���Ƴ�������n��������n�Ӽ������룬n>0����������ǵ�ż���͡�

����
��
���
��
��������
2
1 2
�������
2
*/
#include<stdio.h>

int main54()
{
    int number = 0;
    int data = 0;
    int i = 0;
    int sum = 0;

    scanf("%d",&number);
    for(i = 0;i < number;i++)
    {
        scanf("%d",&data);
        if(0 == (data % 2))
        {
            sum = sum + data;
        }
    }

    printf("%d\n",sum);

    return 0;
}
