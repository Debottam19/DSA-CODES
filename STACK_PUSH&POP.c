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
void Pop(struct stack *ptr)
{
    int POPED_ELEMENT;
    if(IsEmpty(ptr))
    {
        printf("Stack is underflown! You can push %d elements in the stack but you can't pop any elements as it's empty\n",ptr->size);
    }
    else
    {
        POPED_ELEMENT = ptr->arr[ptr->top];
        ptr->top--;
        printf("The element which is poped from the stack is %d\n",POPED_ELEMENT);
    }
}
int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 10;
    s->top = -1;
    s->arr = (int *)malloc(s->size*sizeof(int));
    Push(s,10);
    Push(s,5);
    Push(s,8);
    Push(s,20);
    Push(s,69);
    PrintStack(s,s->top);
    Pop(s);
    PrintStack(s,s->top);
    
    return 0;

}