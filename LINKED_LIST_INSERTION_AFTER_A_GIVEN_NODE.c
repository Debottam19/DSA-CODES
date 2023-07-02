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
struct node * InsertAfterNode(struct node *head,struct node *prevNode,int value)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = value;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
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
    head = InsertAfterNode(head,second,10);
    head = InsertAfterNode(head,third,17);
    head = InsertAfterNode(head,fourth,16);
    printf("\nAfter insertion ");
    LinkdeListDisplay(head);

    return 0;

}