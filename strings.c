#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main() {
    char greeting[] = "hello";
    // strlen is O(N), iterates through string and increments a counter
    printf("Length of \"%s\": %lu\n", greeting, strlen(greeting));

    // more string functions
    // java: String.indexOf
    // gets the char address of codepoint in str => strchr(char *str, int codepoint)
    printf("Address of 'l' in \"%s\": %p\n", greeting, strchr(greeting, 'l'));

    return EXIT_SUCCESS;
}