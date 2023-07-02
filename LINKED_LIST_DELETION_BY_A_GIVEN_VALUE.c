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
struct node * DeleteByValue(struct node *head,int value)
{
    struct node *p = head;
    struct node *q= head->next;
    while (q->data!=value && q->next!=NULL)
    {
        p = p->next;
        q = q->next;
    }
    if(q->data == value)
    {
        p->next = q->next;
        free(q);
    }
    return head;
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;
    struct node *sixth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    fifth = (struct node *)malloc(sizeof(struct node));
    sixth = (struct node *)malloc(sizeof(struct node));

    head->data = 16;
    head->next = second;
    second->data = 5;
    second->next = third;
    third->data = 8;
    third->next = fourth;
    fourth->data = 20;
    fourth->next = fifth;
    fifth->data = 40;
    fifth->next = sixth;
    sixth->data = 69;
    sixth->next = NULL;

    LinkdeListDisplay(head);
    head = DeleteByValue(head,69);
    head = DeleteByValue(head,5);
    head = DeleteByValue(head,20);
    printf("\nAfter deletion at first ");
    LinkdeListDisplay(head);

    return 0;

}