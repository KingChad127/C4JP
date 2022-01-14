#include "stdio.h"
#include "stdlib.h"

int main() {
    unsigned sample = 0xBEEFCAFE; // little Endian = FE CA EF BE
    printf("%x\n", sample & 0xFF); // using & bitwise operator
    // we expect BE to print to the console
    // but instead FE is printed instead

    return EXIT_SUCCESS;
}