//Write a program to Frequency of an element.
#include <stdio.h>
int main()
{
    int n, i, count = 0, arr[100], element;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to find its frequency: ");
    scanf("%d", &element);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            count++;
        }
    }
    printf("The frequency of %d is %d\n", element, count);
    return 0;
}