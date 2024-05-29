#include <stdio.h>

int main() 
{
    int pos, i, n;
    float a[100];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%f", &a[i]);
    }

    printf("Enter the location where you wish to delete the element: ");
    scanf("%d", &pos);

    if (pos < 0 || pos >= n + 1) 
    {
        printf("Invalid position. Cannot delete element.\n");
    }
    else 
    {
        for (i = pos; i < n; i++) 
        {
            a[i] = a[i + 1];
        }
        n = n - 1;
        printf("Resultant array after deletion:\n");
        for (i = 0; i < n; i++) 
        {
            printf("%f \t", a[i]);
        }
    }

    return 0;
}

