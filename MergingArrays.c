#include <stdio.h>

int main() {
    // Define two single-dimensional arrays
    int array1[] = {1, 2, 3};
    int array2[] = {4, 5, 6};
    
    // Calculate the size of the merged array
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);
    int mergedSize = size1 + size2;

    // Create a merged array
    int mergedArray[mergedSize];

    // Copy elements from the first array
    for (int i = 0; i < size1; i++) {
        mergedArray[i] = array1[i];
    }

    // Copy elements from the second array
    for (int i = 0; i < size2; i++) {
        mergedArray[size1 + i] = array2[i];
    }

    // Print the merged array
    printf("Merged Array: ");
    for (int i = 0; i < mergedSize; i++) {
        printf("%d ", mergedArray[i]);
    }
    
    return 0;
}