#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int stack_arr[MAX];
int top = -1;

void push(int item);
int pop();
int peek();
int isEmpty();
int isFull();
void display();

int main()
{
        int choice,data;
        while(choice!=5)
        {
            printf("\n_____Main Menu for Stack operations_____\n");
                printf("\n1.Push\n");
                printf("2.Pop\n");
                printf("3.Display the top element\n");
                printf("4.Display all stack elements\n");
                printf("5.Quit\n");
                printf("\nEnter your choice : ");
                scanf("%d",&choice);
                switch(choice)
                {
                 case 1 :
                        printf("\nEnter the item to be pushed : ");
                        scanf("%d",&data);
                        push(data);
                        break;
                 case 2:
                        data = pop();
                        printf("\nPopped data is : %d\n",data );
                        break;
                 case 3:
                        printf("\nData at the top is : %d\n", peek() );
                        break;
                 case 4:
                        display();
                        break;
                 case 5:
                 printf("Exiting....");
                        exit(1);
                 default:
                        printf("\nWrong choice\n");
                }/*End of switch*/
        }/*End of while*/

        return 0;

}/*End of main()*/

void push(int data)
{
        if( isFull() )
        {
                printf("\nStack Overflow\n");
                return;
        }
        top = top+1;
        stack_arr[top] = data;
}/*End of push()*/

int pop()
{
        int data;
        if( isEmpty() )
        {
                printf("\nStack Underflow\n");
                exit(1);
        }
        data = stack_arr[top];
        top = top-1;
        return item;
}/*End of pop()*/

int peek()
{
        if( isEmpty() )
        {
                printf("\nStack Underflow\n");
                exit(1);
        }
        return stack_arr[top];
}/*End of peek()*/

int isEmpty()
{
        if( top == -1 )
                return 1;
        else
                return 0;
}/*End of isEmpty*/

int isFull()
{
        if( top == MAX-1 )
                return 1;
        else
                return 0;
}/*End of isFull*/

void display()
{
        int i;
        if( isEmpty() )
        {
                printf("\nStack is empty\n");
                return;
        }
    printf("\nStack elements :\n\n");
        for(i=top;i>=0;i--)
                printf(" %d\n", stack_arr[i] );
        printf("\n");
}/*End of display()*/
