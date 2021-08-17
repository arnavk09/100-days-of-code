#include <stdio.h>
int main()
{
    int n, j;
    printf("Enter array size : ");
    scanf("%d", &n);
    int arr[n], element;
    printf("Enter elements to fill in array of size %d \n ",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array : ");
    for (int k = 0; k < n; k++)
    {
        printf(" %d ", arr[k]);
    }
    printf(" \n Enter array element to find : ");
    scanf("%d", &element);
    for (j = 0; j < n; j++)
    {
        if (arr[j] == element)
        {
            printf("found %d at position %d \n", element, (j + 1));
            break;
        }
    }
    if (j == n)
    {
        printf("%d is not present in the array.\n Program is terminated.", element);
    }
    return 0;
}
