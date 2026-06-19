//Write a program to Find duplicates in array.
#include <stdio.h>
int main()
{
    int n, i, j, arr[100];
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Duplicate elements in the array are: ");
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j] && arr[i] != -1)
            {
                printf("%d ", arr[i]);
                arr[j] = -1; 
                break;
            }
        }
    }
    return 0;
}
