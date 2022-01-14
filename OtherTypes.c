#include "stdio.h"
#include "stdbool.h"

int main() {

    // Floating point is represented by IEEE 754
    // double has twice the precision of a float
    float some_value = 1.5;
    double pi = 3.14159265;
    printf("%zu\n", sizeof(int));
    printf("float<%zu>: %f\n", sizeof(float), some_value);
    printf("double<%zu>: %f\n", sizeof(double), pi);

    // operands of different sizes are promoted to the larger of the two sizes
    // the float is thus promoted to a double
    printf("float + double<%zu>: %f\n", sizeof(some_value + pi), some_value + pi);

    // Booleans (as int)
    // -0 : false
    // - non - 0: true
    // problematic for type overflow or unknown behavior
    // (char) 100000000 => 0
    unsigned char condition = 256; // [0, 2^N - 1] => [0, 255] 256 is out of range, and is cast to 0
    if (condition == 0) {
        printf("%d is true!\n", condition);
    } else {
        printf("%d is false!\n", condition);
    }

    // Booleans as booleans (<stdbool.h>) use this always!!
    bool condition_bool = false;
    if (condition_bool) {
        printf("%d is true!\n", condition_bool);
    } else {
        printf("%d is false!\n", condition_bool );
    }
}