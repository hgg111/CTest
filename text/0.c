#include<stdio.h>
typedef struct node
{
    int data;
    struct node *next;
}node;                 //定义节点
node *nodecreate(int data)
{
    node *new = NULL;
    new = malloc(sizeof(node));
    if(new == NULL)
    {
        printf("wrong\n");
        return NULL;
    }
    new->data = data;
    new->next = NULL;
    return new;
}
void list_append(int data)
{
    node *new = NULL;
    node *temp = NULL;
    new = nodecreate(data);
    temp->next = new;
    return;
}
int main0()
{

}
