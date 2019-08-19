/*
题目描述
已有a、b两个链表，每个链表中的结点包括学号、成绩。要求把两个链表合并，按学号升序排列。

输入
第一行，a、b两个链表元素的数量N、M,用空格隔开。 接下来N行是a的数据 然后M行是b的数据 每行数据由学号和成绩两部分组成

输出
按照学号升序排列的数据

样例输入
2 3
5 100
6 89
3 82
4 95
2 10
样例输出
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
}Data,*Datap;         // 定义结构体

/**************************************************************
函数名称：creatlist
描述：创建链表
参数：创建的链表的长度length
返回值：返回链表的头结点
**************************************************************/

Datap creatlist(int length)
{
    Datap head;        // 定义一个头指针
    Datap q;           // 用来遍历链表
    Datap list;        // 链表的结点
    int i = 0;

    head = (Datap)malloc(sizeof(Data));
    head->next = NULL;  // 创建头结点
    q = head;   // 指向头结点
    for(i = 0;i < length;i++)
    {
        list = (Datap)malloc(sizeof(Data));
        scanf("%d%d",&(list->number),&(list->score));  // 创建结点，并读取数据
        q->next = list;
        q = list;               // 连接结点
    }
    q->next = NULL;

    return head;   // 返回头结点
}

/**************************************************************
函数名称：sort_list
描述：给链表中的数据排序
参数：两个链表list1,list2和两个链表的长度之和length
返回值：无
**************************************************************/

void sort_list(Datap list1,Datap list2,int length)    // sort_list函数将链表排序，传入的参数为两个链表和两个链表的长度之和
{
    Datap temp;    // 定义一个指针，用来存放两个链表
    Datap min;     // 定义一个指针指向最小学号
    Datap nowtemp; // 定义一个指针指向目前temp的位置
    int minnumber = 0;
    int minscore = 0;

    temp = list1;
    list2 = list2->next;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = list2;
    temp = list1->next;   // 将两个链表合并存放在temp中

    while(temp != NULL)    // 用选择法排序，每次找出剩余最小的和前面的交换
    {
        nowtemp = temp;
        min = temp;
        min->number = temp->number;   // 先将第一个值当作最小的
        while(nowtemp != NULL)
        {
            if(nowtemp->number < min->number)
            {
                min = nowtemp;
            }
            nowtemp = nowtemp->next;
        }       // 搜索出最小学号
        minnumber = min->number;
        min->number = temp->number;
        temp->number = minnumber;    // 将最小学号和前面的交换
        printf("%d ",temp->number);  // 输出最小学号

        minscore = min->score;
        min->score = temp->score;
        temp->score = minscore;      // 将最小学号的分数和前面的交换
        printf("%d\n",temp->score);  // 输出最小学号的分数

        temp = temp->next;    // 继续向下搜索
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
    list1 = creatlist(length1);      // 创建链表1
    list2 = creatlist(length2);      // 创建链表2

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
