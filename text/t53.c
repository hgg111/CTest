/*
��Ŀ����
��̣�����һ������������������Ȼ�����������Ӧ�İ˽�������

����
��
���
��
��������
10
�������
12
*/
#include<stdio.h>

int main53()
{
    int decimalism = 0;  // ʮ���Ƶ���
    int octonary = 0;    // �˽��Ƶ���
    int remainder = 0;
    int count = 0;
    int i = 0;

    scanf("%d",&decimalism);

    while((decimalism / 8) != 0)
    {
        remainder = decimalism % 8;
        decimalism = decimalism / 8;
        count++;
        for(i = 1;i < count;i++)
        {
            remainder = remainder * 10;
        }
        octonary = octonary + remainder;
    }           // ��������λ��ÿһλ���������������д����octonary��
    remainder = decimalism % 8;
    for(i = 1;i < (count + 1);i++)
    {
        remainder = remainder * 10;
    }
    octonary = octonary + remainder;  // ���˽��Ƶ����λ���

    printf("%d\n",octonary);

    return 0;
}
