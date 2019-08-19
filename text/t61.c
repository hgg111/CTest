/*
��Ŀ����
��д��������һ��ѧ���ĳɼ�����0���������������Ҫ��ͳ�Ʋ�������㣨����85����ͨ����60��84���Ͳ�����С��60����ѧ��������

����
��
���
��
��������
88 71 68 70 59 81 91 42 66 77 83 0
�������
>=85:2
60-84:7
<60:2
*/
#include<stdio.h>
#include<stdlib.h>

typedef struct st_student
{
    int score;
    struct st_student *next;
}Student,*Studentp;

/*******************************************************
�������ƣ�creathead
����������ͷ���
��������
����ֵ��������ͷ���
*******************************************************/

Studentp creathead()
{
    Studentp head;

    head = (Studentp)malloc(sizeof(Student));
    head->next = NULL;

    return head;
}

/******************************************************
�������ƣ�creatnode
��������������
������������ͷ���
����ֵ�������ͷ���
******************************************************/

Studentp creatnode(Studentp head)
{
    Studentp p;
    Studentp node;

    p = head;
    node = (Studentp)malloc(sizeof(Student));
    scanf("%d",&(node->score));
    p->next = node;
    p = node;
    while(node->score > 0)
    {
        node = (Studentp)malloc(sizeof(Student));
        scanf("%d",&(node->score));
        p->next = node;
        p = node;
    }
    node->next = NULL;
    return head;
}

/********************************************************
�������ƣ�search
��������Ҫ����Ҹ���ɼ������������
����������
����ֵ����
********************************************************/

void search(Studentp list)
{
    int good = 0;
    int pass = 0;
    int fail = 0;

    list = list->next;    // ����ͷ���
    while(list->next != NULL)
    {
        if(list->score >= 85)
        {
            good++;
        }
        else if(list->score < 60)
        {
            fail++;
        }
        else
        {
            pass++;
        }
        list = list->next;
    }
    printf(">=85:%d\n60-84:%d\n<60:%d\n",good,pass,fail);
}

int main61()
{
    Studentp list;
    Studentp head;

    head = creathead();
    list = creatnode(head);
    search(list);

    free(list);
    return 0;
}
