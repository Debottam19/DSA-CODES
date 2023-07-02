#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void LinkedListDisplay(struct node *ptr);
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;
    //Allocating memory using malloc for nodes
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    fifth = (struct node *)malloc(sizeof(struct node));
    //Inserting the elements of the nodes and pointing or linking the next node using a pointer
    head->data = 19; //Inserting the element
    head->next = second; //Pointing or linking the next node using a pointer
    second->data = 55; //Inserting the element
    second->next = third; //Pointing or linking the next node using a pointer
    third->data = 78; //Inserting the element
    third->next = fourth; //Pointing or linking the next node using a pointer
    fourth->data = 120; //Inserting the element
    fourth->next = fifth; //Pointing or linking the next node using a pointer
    fifth->data = 7; //Inserting the element
    fifth->next = NULL; //Pointing to a NULL pointer to terminate the linked list
    //Calling a function to display the linked list
    LinkedListDisplay(head);

    return 0;

}
//Function for displaying the linked list
void LinkedListDisplay(struct node *ptr)
{
    printf("The Elements Are : \n");
    while (ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }   
}