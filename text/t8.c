/*
��Ŀ����
����һ�ٷ��Ƴɼ���Ҫ������ɼ��ȼ���A������B������C������D������E���� 90���Լ�90������ΪA��80-89��ΪB��70-79��ΪC��60-69��ΪD��60������ΪE��
����
һ������0��100����
���
һ���ַ�����ʾ�ɼ��ȼ�
��������
90
�������
A
*/
#include<stdio.h>

int main8()
{
    int n = 0;
    scanf("%d",&n);
    if(n < 0 || n > 100)
    {
        printf("wrong\n");
    }
    else if(n >= 90)
    {
        printf("A\n");
    }
    else if(n >= 80)
    {
        printf("B\n");
    }
    else if(n >= 70)
    {
        printf("C\n");
    }
    else if(n >= 60)
    {
        printf("D\n");
    }
    else
    {
        printf("E\n");
    }
    return 0;
}
