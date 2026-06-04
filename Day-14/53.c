// Write a program to Linear search.
#include <stdio.h>
int main()
{
    int n, i, flag, arr[100];
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to flag: ");
    scanf("%d", &flag);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == flag)
        {
            printf("Element found at index %d\n", i);
            return 0;
        }
    }
    printf("Element not found in the array.\n");
    return 0;
}
