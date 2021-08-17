#include <stdio.h>
int main()
{
    int n, j;
    printf("Enter array size : ");
    scanf("%d", &n);
    int arr[n], element;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter array element to find : ");
    scanf("%d", &element);
    for (j = 0; j < n; j++)
    {
        if (arr[j] == element)
        {
            printf("found %d at %d", element, j + 1);
            break;
        }
    }
    if (j == n)
    {
        printf("%d isn't present in the array.\n", element);
    }

    return 0;
}
