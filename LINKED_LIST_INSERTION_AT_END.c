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
struct node * InsertAtEnd(struct node *head,int value)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    while (p->next!=NULL)
    {
        p = p->next;
    }
    ptr->data = value;
    p->next = ptr;
    ptr->next = NULL;
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
    head = InsertAtEnd(head,25);
    head = InsertAtEnd(head,10);
    head = InsertAtEnd(head,62);
    printf("\nAfter insertion at end ");
    LinkdeListDisplay(head);

    return 0;

}