#include<stdio.h>
int main()
{
    int size,i,j,key;
    printf("Enter the size of the array you want to sort :\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of the array :\n");
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Before sorting the elements of the array are :\n");
    for ( i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    //Insertion Sort starts from here
    for ( i = 1; i < size; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j>=0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;   
    }
    printf("\nAfter sorting the elements of the array are : \n");
    for ( i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;

}