/*
��Ŀ����
����10�����������ǵ�ƽ��ֵ�����������ƽ��ֵ�����ݵĸ�����

����
10����

���
����ƽ�����ĸ���

��������
1 2 3 4 5 6 7 8 9 10
�������
5
*/
#include<stdio.h>

int main()
{
    int number[10] = {0};
    int i = 0;
    int count = 0;
    int sum = 0;

    for(i = 0;i < 10;i++)
    {
        scanf("%d",&number[i]);
        sum = sum + number[i];
    }

    for(i = 0;i < 10;i++)
    {
        if(number[i] > (sum / 10))
        {
            count++;
        }
    }

    printf("%d\n",count);

    return 0;

}
