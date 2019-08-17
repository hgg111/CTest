/*
题目描述
有n人围成一圈，顺序排号。从第1个人开始报数（从1到3报数），凡报到3的人退出圈子，问最后留下的是原来的第几号的那位。
输入
初始人数n
输出
最后一人的初始编号
样例输入
3
样例输出
2
*/
/*
#include<stdio.h>

/**********************************************************************************
函数名称：findLast
描述：求剩余的最后一个数
参数：总人数peoplenumber,变化的数组number[],计数的count,目前人数newpeople
返回值：无
**********************************************************************************/
/*
void findLast(int peoplenumber,int number[],int count,int newpeople)
{
    int i = 0;
    int newpeople1 = 0; //表示当前整数的个数

    newpeople1 = newpeople;
    for(i = 1;i <= peoplenumber;i++)
    {
        if(0 == number[i])
        {
            count++;
        }
        if(3 == count)       //每次第三个数标为1，剩余newpeop1e--个数
        {
            number[i] = 1;
            count = 0;
            newpeople1--;
        }
    }
    if(newpeople > 1)
    {
        findLast(peoplenumber,number,count,newpeople1);  //如果剩余的数大于1，则继续循环
    }
}

int main45()
{
    int peoplenumber= 0;  // 总人数
    int i = 0;
    int count = 0;    // 用来检测是否到了第三个
    int number[100] = {0};

    scanf("%d",&peoplenumber);
    findLast(peoplenumber,number,count,peoplenumber);

    for(i = 1;i <= peoplenumber;i++)    //数组中标为0的数的坐标为剩余的最后一个数原来的序号
    {
        if(0 == number[i])
        {
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}
*/

// 环形链表
#include<stdio.h>
#include<stdlib.h>

typedef struct st_number
{
    int number;
    struct st_number *next;
}Number,*Numberp;         // 定义结构体

/**********************************************************************************
函数名称：creatlist
描述：创建一个链表
参数：链表的长度peoplenumber
返回值：返回头结点
**********************************************************************************/

Numberp creatlist(int peoplenumber)
{
    Numberp head;
    Numberp list;
    Numberp q;
    int i = 0;

    head = (Numberp)malloc(sizeof(Number));
    head->number = NULL;
    head->next = NULL;
    q = head;         // 创建头结点

    for(i = 1;i <= peoplenumber;i++)
    {
        list = (Numberp)malloc(sizeof(Number));
        list->number = i;
        q->next = list;
        q = list;
    }          // 创建链表并赋值
    q->next = head;  // 将链表的尾和头连接起来，形成环形链表
    return head;
}

/**********************************************************************************
函数名称：findLast
描述：求剩余的最后一个数并输出
参数：创建的链表numberlist,总人数peoplenumber
返回值：无
**********************************************************************************/

void findLast(Numberp numberlist,int peoplenumber)
{
    int count = 0;
    Numberp temp;     // 创建临时指针

    numberlist = numberlist->next;   // 跳过头结点
    while(peoplenumber != 1)
    {
        if(numberlist->number != NULL)
        {
            count++;       // 计数
            if(2 == count) // 如果到第二个就删除下一个结点
            {
                temp = numberlist->next;
                if(temp->number == NULL)
                {
                    temp = temp->next;  // 如果是头结点就跳过
                }
                numberlist->next = temp->next;
                free(temp);
                count = 0;
                peoplenumber--;
            }
        }
        numberlist = numberlist->next;
    }
    numberlist = numberlist->next;

    printf("%d\n",numberlist->number);  // 输出剩余的最后一个数
}

int main45()
{
    int peoplenumber = 0;
    Numberp numberlist;

    scanf("%d",&peoplenumber);
    numberlist = creatlist(peoplenumber);
    findLast(numberlist,peoplenumber);

    free(numberlist);
    return 0;
}
