/*
题目描述
编写程序，输入一批学生的成绩，遇0或负数则输入结束，要求统计并输出优秀（大于85）、通过（60～84）和不及格（小于60）的学生人数。

输入
无
输出
无
样例输入
88 71 68 70 59 81 91 42 66 77 83 0
样例输出
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
函数名称：creathead
描述：创建头结点
参数：无
返回值：创建的头结点
*******************************************************/

Studentp creathead()
{
    Studentp head;

    head = (Studentp)malloc(sizeof(Student));
    head->next = NULL;

    return head;
}

/******************************************************
函数名称：creatnode
描述：创建链表
参数：创建的头结点
返回值：链表的头结点
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
函数名称：search
描述：按要求查找各类成绩的人数并输出
参数：链表
返回值：无
********************************************************/

void search(Studentp list)
{
    int good = 0;
    int pass = 0;
    int fail = 0;

    list = list->next;    // 跳过头结点
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
