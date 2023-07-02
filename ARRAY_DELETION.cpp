#include<stdio.h>
int main()
{
    int arr[1000],size,i,index;
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
    printf("\nEnter the array index where you want to delete the number (Index is valid between 0 and %d) :\n",size-1);
    scanf("%d",&index);
    for(i=index;i<size-1;i++)
    {
    	arr[i]=arr[i+1];
	}
	size=size-1;
	printf("The final array is :\n");
    for (i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
    
}