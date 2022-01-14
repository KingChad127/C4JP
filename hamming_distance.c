#include "stdio.h"

/**
 * Determine the hamming distance between two arrays of ints.
 *
 * @param a pointer to int array a
 * @param b pointer to int array b
 * @return the hamming distance
 */
int hamming_distance(int *a, int len_a, int *b, int len_b) {
    if (len_a != len_b) {
        printf("a and b must have the same length");
    }
    int hamming_distance = 0;
    for (int i = 0; i < len_a; ++i) {
        if (a[i] != b[i]) {
            hamming_distance++;
        }
    }
    return hamming_distance;
}

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {1, 4, 5, 4, 4};
    printf("Hamming Distance: %d", hamming_distance(a, 5, b, 5));
}