#include<stdio.h>
#include<stdlib.h>
/* We use circular queue because ==> 
In linear queue we can't use the empty indices 
of the dequeued value. But we can use them in circular queue.*/ 
struct CircularQueue
{
    int size;
    int front;
    int rear;
    int *arr;
};
int IsFull(struct CircularQueue *ptr)
{
    if((ptr->rear+1) % ptr->size == ptr->front)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int IsEmpty(struct CircularQueue *ptr)
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
void Enqueue(struct CircularQueue *ptr,int value)
{
    if(IsFull(ptr))
    {
        printf("The queue is Full !! Can't enqueue %d in the queue.\n",value);
    }
    else
    {
        ptr->rear = (ptr->rear+1) % ptr->size;
        ptr->arr[ptr->rear] = value;
        printf("The Enqueued value is %d.\n",ptr->arr[ptr->rear]);
    }
}
void Dequeue(struct CircularQueue *ptr)
{
    int DequeuedValue;
    if(IsEmpty(ptr))
    {
        printf("The queue is Empty !! Nothing to dequeue.\n");
    }
    else
    {
        ptr->front = (ptr->front+1) % ptr->size;
        DequeuedValue = ptr->arr[ptr->front];
        printf("The Dequeued value is %d.\n",DequeuedValue);
    }
}
int main()
{
    struct CircularQueue q;
    q.size = 10;
    q.front = q.rear = 0;
    q.arr = (int *)malloc(q.size*sizeof(int));
    Enqueue(&q,10);
    Enqueue(&q,20);
    Enqueue(&q,30);
    Enqueue(&q,40);
    Enqueue(&q,50);
    Enqueue(&q,60);
    Enqueue(&q,70);
    Enqueue(&q,80);
    Enqueue(&q,90);
    Enqueue(&q,100);
    Enqueue(&q,512);
    printf("The Dequeued values are as following :\n");
    Dequeue(&q);
    Dequeue(&q);
    printf("After dequeuing I can enqueue another value in the Circular Queue :\n");
    Enqueue(&q,100);
    Enqueue(&q,512);
       
    return 0;

}