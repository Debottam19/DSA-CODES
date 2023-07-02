#include<stdio.h>
int main()
{
    int arr[1000],size,i,n,index;
    printf("Enter the size of the array : \n");
    scanf("%d",&size);
    printf("Enter the elements: \n");
    for (i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
   	printf("Before insertion the array is :\n");
    for (i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nEnter the element you want to insert :\n");
    scanf("%d",&n);
    printf("Enter the array index where you want to put the number (Index is valid between 0 and %d) :\n",size);
    scanf("%d",&index);
    for(i=size-1;i>=index;i--)
    {
    	arr[i+1]=arr[i];
	}
	arr[index]=n;
	size=size+1;
	printf("The final array is :\n");
    for (i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
    
}