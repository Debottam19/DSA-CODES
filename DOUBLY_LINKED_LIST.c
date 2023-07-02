#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
void LinkedListDisplayForward(struct node *ptr)
{
    while (ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }   
}
void LinkedListDisplayBackward(struct node *ptr)
{
    while (ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->prev;
    }   
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
    //Head node setup
    head->prev = NULL;
    head->data = 19;
    head->next = second;
    //Second node setup
    second->prev = head;
    second->data = 55;
    second->next = third;
    //Third node setup
    third->prev = second;
    third->data = 78;
    third->next = fourth;
    //Fourth node setup
    fourth->prev = third;
    fourth->data = 120;
    fourth->next = fifth;
    //Fifth node setup
    fifth->prev = fourth;
    fifth->data = 7;
    fifth->next = NULL;
    
    printf("Linked list in forward direction :-\n");
    LinkedListDisplayForward(head);
    printf("\nLinked list in backward direction :-\n");
    LinkedListDisplayBackward(fifth);
   
    return 0;

}