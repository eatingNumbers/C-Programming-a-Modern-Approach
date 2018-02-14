// If c is a variable of type char, which one of the following statements is
// illegal?

#include <stdio.h>

int main() {

    char c = 'c';
    char a = 'a';
    int i = 1;

    // (a): i += c; // i has type int
    printf("(a): %c\n", i += c);

    // (b): c = 2 * c - 1;
    printf("(b): %c\n", c = 2 * c - 1);

    // (c): putchar(c);
    printf("(c): ");
    putchar(a);
    putchar('\n');

    // (d): printf(c); // Illegal
    // printf(c);

    return 0;
}
