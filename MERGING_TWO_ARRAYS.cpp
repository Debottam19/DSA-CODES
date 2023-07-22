#include <stdio.h>
void ArrayTraversal(int array[], int size_of_array)
{
    int i;
    for (i = 0; i < size_of_array; i++)
    {
        printf("%d ", array[i]);
    }
}
//Merging the arrays
void merge(int a1[], int a2[], int size_of_array1, int size_of_array2, int a3[])
{
    int i, j = 0;
    for ( i = 0; i < size_of_array1; i++)
    {
        a3[j] = a1[i];
        j++;
    }
    for ( i = 0; i < size_of_array2; i++)
    {
        a3[j] = a2[i];
        j++;
    }
    printf("\nAfter merging the final array is :\n");
    ArrayTraversal(a3,(size_of_array1 + size_of_array2));
}
int main()
{
    int size1, size2, i;
    printf("Enter the size of first array :\n");
    scanf("%d", &size1);
    printf("Enter the size of second array :\n");
    scanf("%d", &size2);
    int arr1[size1], arr2[size2], arr3[size1 + size2];
    if (size1 > 0 && size2 > 0)
    {
        printf("Enter the elements of the first array :\n");
        for (i = 0; i < size1; i++)
        {
            scanf("%d", &arr1[i]);
        }
        printf("Enter the elements of the second array :\n");
        for (i = 0; i < size2; i++)
        {
            scanf("%d", &arr2[i]);
        }
        printf("The first array is :\n");
        ArrayTraversal(arr1,size1);
        printf("\nThe second array is :\n");
        ArrayTraversal(arr2,size2);
        merge(arr1, arr2, size1, size2, arr3);
    }
    else
    {
        printf("Enter the size of the array greater than zero");
    }

    return 0;
    
}