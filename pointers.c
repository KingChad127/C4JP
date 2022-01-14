#include "stdio.h"
#include "stdlib.h"
#include "stdint.h"


// C is pass by value
// a and b are copied, swap will not reflect in main
//
//void swap(int a, int b) {
//    int temp = b;
//    b = a;
//    a = temp;
//    printf("(swap) a = %d b = %d\n", a, b);
//}

void swap(int *a, int *b) {
    int temp = *b;
    *b = *a;
    *a = temp;
    printf("(swap) a = %d b = %d\n", *a, *b);
}

// ++val
int pre_increment(int *val) {
    *val += 1;
    return *val;
}

// val++
int post_increment(int *val) {
    int old = *val;
    *val += 1;
    return old;
}

void bswap32_in_place(int *input) {
    // bytes: 00 11 22 33
    // swap 00 <-> 33 -> 33 22 11 00
    int swapped = 0;
    uint8_t *bytes = (u_int8_t *) input;
    for (int i = 0; i < sizeof(int); ++i) {
        *((uint8_t *) &swapped + (3 - i)) = *(bytes + i);
    }
    *input = swapped;
}

int main() {

    int a = 7;
    int b = 43;
    // swap(&a, &b); //&a address of a, &b address of b
    // printf("(main) a = %d b = %d\n", a, b);

    // Function parameters are evaluated right to left
    // printf("pre_increment(a): %d, %d, %d", a, pre_increment(&a), a);

    int sample = 0xBEEFCAFE;
    bswap32_in_place(&sample);
    printf("0x%x\n", sample);
    return EXIT_SUCCESS;
}