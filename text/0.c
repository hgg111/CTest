#include<stdio.h>
#include<stdlib.h >
typedef struct student
{
    int data;
    struct student* next;
}List,*Listp;
Listp creatList()
{
    Listp List = (Listp)malloc(sizeof(List));
    List->next = NULL;
    return List;
}
Listp creatNode(int data)
{
    Listp Node = (Listp)malloc(sizeof(List));
    Node->data = data;
    Node->next = NULL;
    return Node;
}
int main0()
{
    int data = 0;
    scanf("%d",&data);
    Listp head;
    head = Listp creatList();
    Listp creatNode(data);
    return 0;
}
