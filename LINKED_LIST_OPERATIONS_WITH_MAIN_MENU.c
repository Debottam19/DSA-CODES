#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
struct node *head;
void Display()
{
    struct node *ptr;
    ptr = head;
    if(ptr == NULL)
    {
        printf("Linked list empty");
    }
    else
    {
        printf("The linked list is : \n");
        while (ptr != NULL)
        {
            printf("%d\n",ptr->data);
            ptr = ptr->next;
        }
    }
}
void InsertAtFirst()
{
    struct node *ptr;
    int value;
    ptr = (struct node *)malloc(sizeof(struct node));
    if(ptr == NULL)
    {
        printf("Overflow !!!");
    }
    else
    {
        printf("Enter the value you want to insert at first :\n");
        scanf("%d",&value);
        ptr->data = value;
        ptr->next = head;
        head = ptr;
        printf("Node inserted at first\n");
    }
}
void InsertAtEnd()
{
    struct node *ptr;
    struct node *temp;
    int value;
    ptr = (struct node *)malloc(sizeof(struct node));
    temp = head;
    if(ptr == NULL)
    {
        printf("Overflow !!!");
    }
    else
    {
        printf("Enter the value you want to insert at end :\n");
        scanf("%d",&value);
        ptr->data = value;
        ptr->next = NULL;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = ptr;
        printf("Node inserted at end\n");
    }
}
int main()
{
    int choice = 0;
    while (choice != 10)
    {
        printf("______Main_Menu______\n");
        printf("Choose an option from the following list :- \n");
        printf("____________________________________________\n");
        printf("1. Insert at first \n2. Insert at end \n9. Display the linked list \n10. Exit\n");
        printf("What is your choice ?\n");
        printf("______________________\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            InsertAtFirst();
            break;
        case 2:
            InsertAtEnd();
            break;
        case 9:
            Display();
            break;
        case 10:
            exit(0);
            break;
        default:
        printf("Please enter a valid choice");
        }
    }
    
    return 0;

}