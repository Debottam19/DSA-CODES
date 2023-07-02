#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void CircularLinkedListDisplay(struct node *head)
{
        struct node *ptr = head;
        printf("The Elements Are : \n");
        do
        {
            printf("%d ",ptr->data);
            ptr = ptr->next;
        }while (ptr!=head);
        
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
    head->data = 19;
    head->next = second;
    //Second node setup
    second->data = 55;
    second->next = third;
    //Third node setup
    third->data = 78;
    third->next = fourth;
    //Fourth node setup
    fourth->data = 120;
    fourth->next = fifth;
    //Fifth node setup
    fifth->data = 7;
    fifth->next = head;

    CircularLinkedListDisplay(head);
    
    return 0;

}