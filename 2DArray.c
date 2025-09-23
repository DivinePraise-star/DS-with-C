#include <stdio.h>

void findMin(int arr[][3], int rows, int *min, int *minRow, int *minCol) {
    *min = arr[0][0];
    *minRow = 0;
    *minCol = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] < *min) {
                *min = arr[i][j];
                *minRow = i;
                *minCol = j;
            }
        }
    }
}

void findMax(int arr[][3], int rows, int *max, int *maxRow, int *maxCol) {
    *max = arr[0][0];
    *maxRow = 0;
    *maxCol = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] > *max) {
                *max = arr[i][j];
                *maxRow = i;
                *maxCol = j;
            }
        }
    }
}

int main() {
    int array[3][3] = {
        {3, 5, 1},
        {7, 9, 2},
        {8, 4, 6}
    };

    int min, max, minRow, minCol, maxRow, maxCol;

    findMin(array, 3, &min, &minRow, &minCol);
    findMax(array, 3, &max, &maxRow, &maxCol);

    printf("Minimum Element: %d at (%d, %d)\n", min, minRow, minCol);
    printf("Maximum Element: %d at (%d, %d)\n", max, maxRow, maxCol);

    return 0;
}