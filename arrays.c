#include "stdio.h"
#include "stdlib.h"

void printArray(int *arr, int rows, int columns) {
    // this is only getting the size of the pointer
    // not the size of the whole region of memory
    // the size of the pointer is 8 bytes
    // there is no way to get the length of the array when it is passed

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            printf("a[%d][%d] = %d\n", i, j, arr[i * rows + j]);
        }
    }
}

int main() {
    // len of one side of the array
    int len = 8;
    int arr[8][8]; // the elements of this array are not initialized to zero
    for (int i = 0; i < len; ++i) {
        for (int j = 0; j < len; ++j) {
            arr[i][j] = i * j;
        }
    }

    printArray(arr, len, len);
    return EXIT_SUCCESS;
}