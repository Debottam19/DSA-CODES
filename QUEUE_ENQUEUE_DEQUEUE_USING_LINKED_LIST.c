#include<stdio.h>
#include<stdlib.h>
struct node *front;
struct node *rear;
struct node
{
    int data;
    struct node *next;
};
void LinkedListDisplay(struct node *ptr)
{
    printf("The elements of the Queue are :\n");
    while (ptr != NULL)
    {
        printf("Element = %d\n",ptr->data);
        ptr = ptr->next;
    }
}
int IsFull(struct node *ptr)
{
    if(ptr == NULL)
    {
        return 1; 
    }
    else
    {
        return 0;
    }
}
int IsEmpty()
{
    if(front == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void Enqueue(int value)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if(IsFull(n))
    {
        printf("The queue is Full !! Can't enqueue %d in the queue.\n",value);
    }
    else
    {
        n->data = value;
        n->next = NULL;
        if(front == NULL)
        {
            front = rear = n;
        }
        else
        {
            rear->next = n;
            rear = n;
        }
    }
}
void Dequeue()
{
    int DequeuedValue;
    struct node *ptr = front;
    if(IsEmpty())
    {
        printf("The queue is Empty !! Nothing to dequeue.\n");
    }
    else
    {
        DequeuedValue = front->data;
        front = front->next;
        free(ptr);
        printf("The Dequeued value is %d.\n",DequeuedValue);
    }
}
int main()
{
    Enqueue(10);
    Enqueue(20);
    Enqueue(30);
    Enqueue(40);
    Enqueue(50);
    Enqueue(60);
    Enqueue(70);
    Enqueue(80);
    LinkedListDisplay(front);
    printf("The Dequeued values are as following :\n");
    Dequeue();
    Dequeue();
    Dequeue();
    Dequeue();
    printf("After Dequeuing,\n");
    LinkedListDisplay(front);

    return 0;

}