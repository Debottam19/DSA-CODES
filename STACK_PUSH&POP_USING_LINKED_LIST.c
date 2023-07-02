#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top = NULL;
void LinkedListDisplay(struct node *ptr)
{
    printf("The stack is :\n");
    while (ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
}
int IsFull(struct node* top)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    if(p==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int IsEmpty(struct node *top)
{
    if(top==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
struct node *Push(struct node *top,int value)
{
    if(IsFull(top))
    {
        printf("Stack is overflown!!!!\n");
    }
    else
    {
        struct node *n = (struct node *)malloc(sizeof(struct node));
        n->data = value;
        n->next = top;
        top = n;
    }
    return top;
}
int Pop(struct node *topmost)
{
    int PopedValue;
    if(IsEmpty(top))
    {
        printf("Stack is underflown!!!!\n");
    }
    else
    {
        struct node *n = topmost;
        top = topmost->next;
        PopedValue = n->data;
        free(n);
    }
    return PopedValue;
}
int main()
{
    int PopedElement;
    top = Push(top,40);
    top = Push(top,20);
    top = Push(top,8);
    top = Push(top,5);
    top = Push(top,15);
    LinkedListDisplay(top);
    PopedElement = Pop(top);
    printf("\nPoped element is : %d",PopedElement);
    PopedElement = Pop(top);
    printf("\nPoped element is : %d",PopedElement);
    printf("\nAfter poping ");
    LinkedListDisplay(top);
    
    return 0;

}