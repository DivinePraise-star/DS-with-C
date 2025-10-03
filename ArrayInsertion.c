#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 5, 6};
    int size = 5;
    int newElement = 4;//element to insert
    int position = 3; // Position to insert

    if(size == 10) { // Check if there's space
        printf("Array is full, cannot insert new element.\n");
        return 0;
    }

    // Shift elements to the right
    for (int i = size; i >= position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = newElement;
    size++;

    printf("Array after insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
