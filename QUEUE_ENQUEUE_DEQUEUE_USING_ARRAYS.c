#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int size;
    int front;
    int rear;
    int *arr;
};
int IsEmpty(struct queue *ptr)
{
    if(ptr->front == ptr->rear)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int IsFull(struct queue *ptr)
{
    if(ptr->rear == ptr->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void Enqueue(struct queue *ptr,int value)
{
    if(IsFull(ptr))
    {
        printf("The queue is Full !! Can't enqueue %d in the queue.\n",value);
    }
    else
    {
        ptr->rear++;
        ptr->arr[ptr->rear] = value;
        printf("The Enqueued value is %d.\n",ptr->arr[ptr->rear]);
    }
}
void Dequeue(struct queue *ptr)
{
    int DequeuedValue;
    if(IsEmpty(ptr))
    {
        printf("The queue is Empty !! Nothing to dequeue.\n");
    }
    else
    {
        ptr->front++;
        DequeuedValue = ptr->arr[ptr->front];
        printf("The Dequeued value is %d.\n",DequeuedValue);
    }
}
int main()
{
    struct queue q;
    q.size = 100;
    q.front = q.rear = -1;
    q.arr = (int *)malloc(q.size*sizeof(int));
    Enqueue(&q,10);
    Enqueue(&q,20);
    Enqueue(&q,30);
    Enqueue(&q,40);
    Enqueue(&q,50);
    Enqueue(&q,60);
    Enqueue(&q,70);
    Enqueue(&q,80);
    printf("The Dequeued values are as following :\n");
    Dequeue(&q);
    Dequeue(&q);
    Dequeue(&q);
    
    return 0;
    
}