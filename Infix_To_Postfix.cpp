#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack
{
    int size;
    int top;
    char *arr;
};
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
char StackTop(struct stack *ptr)
{
    return ptr->arr[ptr->top];
}
void Push(struct stack *ptr,char symbol)
{
    if(IsFull(ptr))
    {
        printf("Stack is overflown! You can't push %c in the stack\n",symbol);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = symbol;
    }
}
char Pop(struct stack *ptr)
{
    char PoppedOperator;
    if(IsEmpty(ptr))
    {
        printf("Stack is underflown!");
    }
    else
    {
        PoppedOperator = ptr->arr[ptr->top];
        ptr->top--;
    }
    return PoppedOperator;
}
int IsOperator(char ch)
{
    if(ch == '+' || ch == '-' || ch == '*' || ch == '/')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int Precedence(char ch)
{
    if(ch == '*' || ch == '/')
    {
        return 2;
    }
    else if(ch == '+' || ch == '-')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
char *InfixToPostfix(char *Infix)
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = strlen(Infix);
    s->top = -1;
    s->arr = (char *)malloc(s->size*sizeof(char));
    char *Postfix = (char *)malloc((strlen(Infix)+1)*sizeof(char));
    int i = 0;
    int j = 0;
    while (Infix[i]!='\0')
    {
        if(!IsOperator(Infix[i]))
        {
            Postfix[j] = Infix[i];
            j++;
            i++;
        }
        else
        {
            if(Precedence(Infix[i]) > Precedence(StackTop(s)))
            {
                Push(s,Infix[i]);
                i++;
            }
            else
            {
                Postfix[j] = Pop(s);
                j++;
            }
        }
    }
    while(!IsEmpty(s))
    {
        Postfix[j] = Pop(s);
        j++;
    }
    Postfix[j] = '\0';
    return Postfix;
}
int main()
{
    char infix[100];
    printf("Enter the infix expression :\n");
    scanf("%s",infix);
    printf("The Postfix expression is :\n%s",InfixToPostfix(infix));
   
    return 0;
    
}