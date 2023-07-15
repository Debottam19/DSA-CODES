#include<stdio.h>
int main()
{
    int size,i,j,index_of_min,temp;
    printf("Enter the size of the array you want to sort :\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements you want to sort :\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Before sorting the elements of the array are :\n");
    for(i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    //Selection Sort starts from here
    for (i = 0; i < size-1; i++)
    {
        index_of_min = i;
        for (j = i+1; j < size; j++)
        {
            if(arr[j] < arr[index_of_min])
            {
                temp = arr[index_of_min];
                arr[index_of_min] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nAfter sorting the elements of the array are : \n");
    for ( i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;

}