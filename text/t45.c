/*
��Ŀ����
��n��Χ��һȦ��˳���źš��ӵ�1���˿�ʼ��������1��3��������������3�����˳�Ȧ�ӣ���������µ���ԭ���ĵڼ��ŵ���λ��
����
��ʼ����n
���
���һ�˵ĳ�ʼ���
��������
3
�������
2
*/
#include<stdio.h>

void findLast(int peoplenumber,int number[],int count,int newpeople) // findLast����������һ����,����Ĳ���Ϊ��������ÿ�α仯�����飬����������count��ʣ���������
{
    int i = 0;
    int newpeople1 = 0; //��ʾ��ǰ�����ĸ���

    newpeople1 = newpeople;
    for(i = 1;i <= peoplenumber;i++)
    {
        if(0 == number[i])
        {
            count++;
        }
        if(3 == count)       //ÿ�ε���������Ϊ1��ʣ��newn1--����
        {
            number[i] = 1;
            count = 0;
            newpeople1--;
        }
    }
    if(newpeople > 1)
    {
        findLast(peoplenumber,number,count,newpeople1);  //���ʣ���������1�������ѭ��
    }
}

int main45()
{
    int peoplenumber= 0;  // ������
    int i = 0;
    int count = 0;    // ��������Ƿ��˵�����
    int number[100] = {0};

    scanf("%d",&peoplenumber);
    findLast(peoplenumber,number,count,peoplenumber);

    for(i = 1;i <= peoplenumber;i++)    //�����б�Ϊ0����������Ϊʣ������һ����ԭ�������
    {
        if(0 == number[i])
        {
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}
