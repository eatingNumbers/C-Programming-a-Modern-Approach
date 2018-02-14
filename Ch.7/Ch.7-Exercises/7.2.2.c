/* Which of the following are not legal constants in C? Classify each legal
constant as either integer or floating-point. */

#include <stdio.h>

int main() {

    // (a): 010E2
    printf("(a): %.2f\n", 010E2);
    // (b): 32.1E+5
    printf("(b): %.2f\n", 32.1E+5);
    // (c): 0790: Illegal
    // printf("(c): %f\n", 0790);
    // (d): 100_000: Illegal
    // printf("(d): %f\n", 100_000);
    // (e): 3.978e-2
    printf("(e): %f\n", 3.978e-2);

    return 0;
}
