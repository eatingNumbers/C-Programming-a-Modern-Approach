// Computes a Universal Product Code check digit.
// Variant of the upc.c program.

#include <stdio.h>

int main() {

    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, \
        first_sum, second_sum, total;

    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, \
            &j1, &j2, &j3, &j4, &j5);

    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;

    printf("Check digit: %1d\n", 9 - ((total - 1) % 10));
        // Can be written as:
        // printf("Check digit: %1d\n", 9 - (total - 1) % 10);

    return 0;
}