#include <stdio.h>
int main()
{
    int arr[100], even[100], odd[100], i, j = 0, k = 0, size;
    printf("Enter the size of the array :\n");
    scanf("%d", &size);
    if (size > 0)
    {
        printf("Enter the elements of the array :\n");
        for (i = 0; i < size; i++)
        {
            scanf("%d", &arr[i]);
        }
        printf("The array is :\n");
        for (i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
        for (i = 0; i < size; i++)
        {
            if (arr[i] % 2 == 0)
            {
                even[j] = arr[i];
                j++;
            }
            else
            {
                odd[k] = arr[i];
                k++;
            }
        }
        printf("\nThe even array is :\n");
        for (i = 0; i < j; i++)
        {
            printf("%d ", even[i]);
        }
        printf("\nThe odd array is :\n");
        for (i = 0; i < k; i++)
        {
            printf("%d ", odd[i]);
        }
    }
    else
    {
        printf("Enter size greater than zero / 0");
    }

    return 0;

}