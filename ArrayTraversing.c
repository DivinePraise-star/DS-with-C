#include <stdio.h> // For input/output functions

int main() {
    int myNumbers[] = {10, 20, 30, 40, 50};
    int size=sizeof(myNumbers)/sizeof(myNumbers[0]);
    if (size <= 0) {
        printf("Array is empty, no elements to traverse.\n");
        return 0;
    }

    for (int i = 0; i < size; i++) {
        printf("%d \n", myNumbers[i]);
    }
    printf("\n");
    return 0;
}
// Output: 10 20 30 40 50

