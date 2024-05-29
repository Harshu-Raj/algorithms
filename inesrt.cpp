#include <stdio.h>

int main() {
    int arr[100];
    int i, x, pos, n;

    // Get the size of the array from the user
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements from the user
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Get the element to be inserted
    printf("Enter the element to be inserted: ");
    scanf("%d", &x);

    // Get the position where the element should be inserted
    printf("Enter the position where you want to insert the element: ");
    scanf("%d", &pos);

    // Shift elements from pos to the right
    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element at the specified position
    arr[pos - 1] = x;
    n++; // Increase the array size

    // Display the updated array
    printf("Resultant array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

