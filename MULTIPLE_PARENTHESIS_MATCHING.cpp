#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack
{
    int size;
    int top;
    char *arr;
};
int IsFull(struct stack *ptr)
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
int IsEmpty(struct stack *ptr)
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
void Push(struct stack *ptr,char symbol)
{
    if(IsFull(ptr))
    {
        printf("STACK IS OVERFLOWN!!!!!!");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = symbol;
    }
}
char Pop(struct stack *ptr)
{
    char PopedSymbol; 
    if(IsEmpty(ptr))
    {
        printf("STACK IS UNDERFLOWN!!!!!!");
    }
    else
    {
        PopedSymbol = ptr->arr[ptr->top];
        ptr->top--;   
    }
    return PopedSymbol;
}
int MatchingBrackets(char a,char b)
{
    if(a == '(' && b == ')')
    {
        return 1;
    }
    else if(a == '{' && b == '}')
    {
        return 1;
    }
    else if(a == '[' && b == ']')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int ParenthdsisMathching(char *exp)
{
    int i = 0;
    char PopedBracket;
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = strlen(exp);
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size*sizeof(char));
    for ( i = 0; exp[i]!='\0'; i++)
    {
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
        {
            Push(sp,exp[i]);
        }
        else if(exp[i]==')' || exp[i]=='}' || exp[i]==']')
        {
            if(IsEmpty(sp))
            {
                return 0;
            }
            else
            {
                PopedBracket = Pop(sp);
                if(!MatchingBrackets(PopedBracket,exp[i]))
                {
                    return 0;
                }
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
    if(ParenthdsisMathching(ch))
    {
        printf("Parenthesis is balanced for the expression %s",ch);
    }
    else
    {
        printf("Parenthesis is not balanced for the expression %s",ch);
    }

    return 0;

}
