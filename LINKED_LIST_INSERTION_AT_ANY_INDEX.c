#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
void LinkdeListDisplay(struct node *ptr)
{
    printf("Elements of the linked list are :\n");
    while (ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
    
}
struct node * InsertAtIndex(struct node *head,int value,int index)
{
    int i=0;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    for ( i = 0; i < index-1; i++)
    {
        p = p->next;
    }
    ptr->data = value;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    fifth = (struct node *)malloc(sizeof(struct node));

    head->data = 15;
    head->next = second;
    second->data = 5;
    second->next = third;
    third->data = 8;
    third->next = fourth;
    fourth->data = 20;
    fourth->next = fifth;
    fifth->data = 69;
    fifth->next = NULL;

    LinkdeListDisplay(head);
    head = InsertAtIndex(head,25,2);
    head = InsertAtIndex(head,10,4);
    head = InsertAtIndex(head,62,5);
    printf("\nAfter insertion ");
    LinkdeListDisplay(head);

    return 0;

}