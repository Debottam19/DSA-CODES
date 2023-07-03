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
void Push(struct stack *ptr,char value)
{
    if(IsFull(ptr))
    {
        printf("Stack is overflown! You can't push %c in the stack\n",value);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}
char Pop(struct stack *ptr)
{
    char PoppedParenthesis;
    if(IsEmpty(ptr))
    {
        printf("Stack is underflown!");
    }
    else
    {
        PoppedParenthesis = ptr->arr[ptr->top];
        ptr->top--;
    }
    return PoppedParenthesis;
}
int ParenthesisMatching(char *exp)
{
    int i = 0;
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = strlen(exp);
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size*sizeof(char));
    for ( i = 0; exp[i]!='\0'; i++)
    {
        if(exp[i]=='(')
        {
            Push(sp,'(');
        }
        else if(exp[i]==')')
        {
            if(IsEmpty(sp))
            {
                return 0;
            }
            else
            {
                Pop(sp);
            }
        }
    }
    if(IsEmpty(sp))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    char ch[100];
    printf("Enter the expression : \n");
    scanf("%s",ch);
    if(ParenthesisMatching(ch))
    {
        printf("Parenthesis is matching for the expression %s",ch);
    }
    else
    {
        printf("Parenthesis is not matching for the expression %s",ch);
    }

    return 0;

}