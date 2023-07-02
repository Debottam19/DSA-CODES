#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
void PrintStack(struct stack *ptr,int newtop)
{
    int i;
    printf("The current stack is :\n");
    for(i=newtop;i>=0;i--)
    {
        printf("%d ",ptr->arr[i]);
    }
    printf("\nThe updated top = %d\n",ptr->top);
}
int IsFull(struct stack* ptr)
{
    if(ptr->top==ptr->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    } 
}
int IsEmpty(struct stack* ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    } 
}
void Push(struct stack *ptr,int value)
{
    if(IsFull(ptr))
    {
        printf("Stack is overflown! You can't push %d in the stack\n",value);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}
void Peek(struct stack *ptr,int i)
{
    int ArrayIndex = ptr->top-i+1;
    int PeekElement;
    if(ArrayIndex<0 || ArrayIndex>ptr->top)
    {
        printf("Enter a valid position");
    }
    else 
    {
        PeekElement = ptr->arr[ArrayIndex];
        printf("The peeked element is : %d\n",PeekElement);
    }
}
int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 10;
    s->top = -1;
    s->arr = (int *)malloc(s->size*sizeof(int));
    int position;
    Push(s,10);
    Push(s,5);
    Push(s,8);
    Push(s,20);
    Push(s,69);
    PrintStack(s,s->top);
    printf("Enter the position of the element you want to peek (as per stack) :\n");
    scanf("%d",&position);
    Peek(s,position);

    return 0;

}