#include "stdio.h"
#include "stdlib.h"

int main() {
    // create an array of 64 ints
    int arr[64]; // the elements of this array are not initialized to zero
    for (int i = 0; i < 64; ++i) {
        arr[i] = i;
    }
    
    // print the array
    for (int i = 0; i < 64; ++i) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}