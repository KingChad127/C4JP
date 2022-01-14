#include "stdio.h"
#include "stdlib.h"

int average(int a, int b) {
    return (a + b) / 2;
}

int main() {
    int fn_val = average(10, average(10, 30));
    printf("Average: %d\n", fn_val);
    return EXIT_SUCCESS;
}