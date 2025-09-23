#include <stdio.h> // For input/output functions

// Function to insert an element into an array
// Parameters:
//   arr[]: The array
//   *n: Pointer to the current number of elements (passed by reference to update size)
//   max_size: The maximum capacity of the array
//   element: The value to insert
//   position: The index where the element should be inserted (0-indexed)
void insertElement(int arr[], int *n, int max_size, int element, int position) {
    // Check if the array is full
    if (*n >= max_size) {
        printf("Error: Array is full. Cannot insert more elements.\n");
        return;
    }

    // Check if the position is valid
    if (position < 0 || position > *n) {
        printf("Error: Invalid position for insertion (must be between 0 and %d).\n", *n);
        return;
    }

    // Shift elements to the right to make space for the new element
    // This loop iterates from the last element down to the insertion position
    for (int i = *n - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the new element at the specified position
    arr[position] = element;

    // Increment the number of elements in the array
    (*n)++; // Dereference n and then increment
    printf("Element %d inserted successfully at position %d.\n", element, position);
}

// Example usage
/*
int main() {
    int arr = {10, 20, 30, 40, 50}; // An array with max capacity 100
    int n = 5; // Current number of elements
    int max_size = 100;

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    insertElement(arr, &n, max_size, 25, 2); // Insert 25 at index 2
    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    insertElement(arr, &n, max_size, 60, 0); // Insert 60 at index 0
    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    insertElement(arr, &n, max_size, 70, n); // Insert 70 at the end
    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    insertElement(arr, &n, max_size, 99, 10); // Invalid position example
    insertElement(arr, &n, max_size, 100, -1); // Invalid position example

    return 0;
}
*/
