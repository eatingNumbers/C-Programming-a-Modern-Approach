// Which of the following are not legal types in C?

#include <stdio.h>

int main() {

    // (a): short unsigned int
    short unsigned int num = 10;
    printf("(a): %d\n", num);
    // (b): short float: Illegal
    // short float num_float = 10;
    // (c): long double
    long double num_double = 10;
    printf("(c): %Lf\n", num_double);
    // (d): unsigned long
    unsigned long num_long = 10;
    printf("(c): %ld\n", num_long);

    return 0;
}
