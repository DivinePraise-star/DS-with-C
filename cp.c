#include <stdio.h>

#define MAX_SIZE 100

void insert(int arr[], int *size, int element, int position) {
    if (*size >= MAX_SIZE) {
        printf("Array is full. Insertion not possible.\n");
        return;
    }
    // Shift elements to the right
    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element; // Insert the new element
    (*size)++; // Update size
}

void delete(int arr[], int *size, int position) {
    if (position < 0 || position >= *size) {
        printf("Invalid position. Deletion not possible.\n");
        return;
    }
    // Shift elements to the left
    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--; // Update size
}

int search(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; // Return the index if found
        }
    }
    return -1; // Not found
}

void display(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[MAX_SIZE];
    int size = 0; // Current size of the array
    int choice, element, position;

    do {
        printf("\nMenu:\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Search\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element to insert: ");
                scanf("%d", &element);
                printf("Enter position (0 to %d): ", size);
                scanf("%d", &position);
                insert(arr, &size, element, position);
                break;

            case 2:
                printf("Enter position to delete (0 to %d): ", size - 1);
                scanf("%d", &position);
                delete(arr, &size, position);
                break;

            case 3:
                printf("Enter element to search: ");
                scanf("%d", &element);
                position = search(arr, size, element);
                if (position != -1) {
                    printf("Element %d found at index %d.\n", element, position);
                } else {
                    printf("Element %d not found.\n", element);
                }
                break;

            case 4:
                display(arr, size);
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}