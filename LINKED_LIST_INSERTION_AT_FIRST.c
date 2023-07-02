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
struct node * InsertAtFirst(struct node *head,int value)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = value;
    ptr->next = head;
    return ptr;
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
    head = InsertAtFirst(head,10);
    printf("\nAfter insertion at first ");
    LinkdeListDisplay(head);

    return 0;

}