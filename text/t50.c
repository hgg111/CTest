/*
��Ŀ����
����a��b��������ÿ�������еĽ�����ѧ�š��ɼ���Ҫ�����������ϲ�����ѧ���������С�

����
��һ�У�a��b��������Ԫ�ص�����N��M,�ÿո������ ������N����a������ Ȼ��M����b������ ÿ��������ѧ�źͳɼ����������

���
����ѧ���������е�����

��������
2 3
5 100
6 89
3 82
4 95
2 10
�������
2 10
3 82
4 95
5 100
6 89
*/
#include<stdio.h>
#include<stdlib.h>

typedef struct st_data
{
    int number;
    int score;
    struct st_data *next;
}Data,*Datap;         // ����ṹ��

/**************************************************************
�������ƣ�creatlist
��������������
����������������ĳ���length
����ֵ�����������ͷ���
**************************************************************/

Datap creatlist(int length)
{
    Datap head;        // ����һ��ͷָ��
    Datap q;           // ������������
    Datap list;        // ����Ľ��
    int i = 0;

    head = (Datap)malloc(sizeof(Data));
    head->next = NULL;  // ����ͷ���
    q = head;   // ָ��ͷ���
    for(i = 0;i < length;i++)
    {
        list = (Datap)malloc(sizeof(Data));
        scanf("%d%d",&(list->number),&(list->score));  // ������㣬����ȡ����
        q->next = list;
        q = list;               // ���ӽ��
    }
    q->next = NULL;

    return head;   // ����ͷ���
}

/**************************************************************
�������ƣ�sort_list
�������������е���������
��������������list1,list2����������ĳ���֮��length
����ֵ����
**************************************************************/

void sort_list(Datap list1,Datap list2,int length)    // sort_list�������������򣬴���Ĳ���Ϊ�����������������ĳ���֮��
{
    Datap temp;    // ����һ��ָ�룬���������������
    Datap min;     // ����һ��ָ��ָ����Сѧ��
    Datap nowtemp; // ����һ��ָ��ָ��Ŀǰtemp��λ��
    int minnumber = 0;
    int minscore = 0;

    temp = list1;
    list2 = list2->next;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = list2;
    temp = list1->next;   // ����������ϲ������temp��

    while(temp != NULL)    // ��ѡ������ÿ���ҳ�ʣ����С�ĺ�ǰ��Ľ���
    {
        nowtemp = temp;
        min = temp;
        min->number = temp->number;   // �Ƚ���һ��ֵ������С��
        while(nowtemp != NULL)
        {
            if(nowtemp->number < min->number)
            {
                min = nowtemp;
            }
            nowtemp = nowtemp->next;
        }       // ��������Сѧ��
        minnumber = min->number;
        min->number = temp->number;
        temp->number = minnumber;    // ����Сѧ�ź�ǰ��Ľ���
        printf("%d ",temp->number);  // �����Сѧ��

        minscore = min->score;
        min->score = temp->score;
        temp->score = minscore;      // ����Сѧ�ŵķ�����ǰ��Ľ���
        printf("%d\n",temp->score);  // �����Сѧ�ŵķ���

        temp = temp->next;    // ������������
    }
}

int main()
{
    int length1 = 0;
    int length2 = 0;
    Datap list1;
    Datap list2;
    Datap p;

    scanf("%d%d",&length1,&length2);
    list1 = creatlist(length1);      // ��������1
    list2 = creatlist(length2);      // ��������2

    sort_list(list1,list2,(length1 + length2));

    while(list1->next != NULL)
    {
        p = list1;
        free(p);
        list1 = list1->next;
    }
    while(list2->next != NULL)
    {
        p = list2;
        free(p);
        list2 = list2->next;
    }
    return 0;
}
