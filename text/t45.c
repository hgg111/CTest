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
/*
#include<stdio.h>

/**********************************************************************************
�������ƣ�findLast
��������ʣ������һ����
������������peoplenumber,�仯������number[],������count,Ŀǰ����newpeople
����ֵ����
**********************************************************************************/
/*
void findLast(int peoplenumber,int number[],int count,int newpeople)
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
        if(3 == count)       //ÿ�ε���������Ϊ1��ʣ��newpeop1e--����
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
*/

// ��������
#include<stdio.h>
#include<stdlib.h>

typedef struct st_number
{
    int number;
    struct st_number *next;
}Number,*Numberp;         // ����ṹ��

/**********************************************************************************
�������ƣ�creatlist
����������һ������
����������ĳ���peoplenumber
����ֵ������ͷ���
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
    q = head;         // ����ͷ���

    for(i = 1;i <= peoplenumber;i++)
    {
        list = (Numberp)malloc(sizeof(Number));
        list->number = i;
        q->next = list;
        q = list;
    }          // ����������ֵ
    q->next = head;  // �������β��ͷ�����������γɻ�������
    return head;
}

/**********************************************************************************
�������ƣ�findLast
��������ʣ������һ���������
����������������numberlist,������peoplenumber
����ֵ����
**********************************************************************************/

void findLast(Numberp numberlist,int peoplenumber)
{
    int count = 0;
    Numberp temp;     // ������ʱָ��

    numberlist = numberlist->next;   // ����ͷ���
    while(peoplenumber != 1)
    {
        if(numberlist->number != NULL)
        {
            count++;       // ����
            if(2 == count) // ������ڶ�����ɾ����һ�����
            {
                temp = numberlist->next;
                if(temp->number == NULL)
                {
                    temp = temp->next;  // �����ͷ��������
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

    printf("%d\n",numberlist->number);  // ���ʣ������һ����
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
