#include <stdio.h>

int main() {

    int i = 8, j = 4;
    printf("%d\n", (-i) / j); // My Answer: -2.
                              // Correct Answer: -2.
    printf("%d\n", -(i / j)); // My Answer: 2.
                              // Correct Answer: -2.

    return 0;
}
