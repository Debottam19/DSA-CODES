/*LINKED_LIST_USING_LOOP_&_USER_INPUT*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void LinkedListTraversal(struct node *ptr)
{
    printf("The linked list is :\n");
    while (ptr != NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    struct node *head, *prev;
    int i, size;
    printf("Enter the size of your linked list :\n");
    scanf("%d", &size);
    head = NULL;
    for (i = 0; i < size; i++)
    {
        struct node *NewNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the element for the node %d :\n", i + 1);
        scanf("%d",&(NewNode->data));
        NewNode->next = NULL;
        if (head == NULL)
        {
            head = NewNode;
        }
        else
        {
            prev = head;
            while (prev->next != NULL)
            {
                prev = prev->next;
            }
            prev->next = NewNode;
        }
    }

    LinkedListTraversal(head);

    return 0;

}