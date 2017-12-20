// Computes a Universal Product Code check digit.

#include <stdio.h>

int main() {

    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, \
        first_sum, second_sum, total, last_digit, check_digit;

    printf("Enter the first (single) digit: ");
    scanf("%1d", &d);

    printf("Enter the last digit: ");
    scanf("%1d", &last_digit);

    printf("Enter first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);

    printf("Enter second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;

    check_digit = 9 - ((total - 1) % 10);
        // Can be written as:
        // printf("Check digit: %1d\n", 9 - (total - 1) % 10);

    if (last_digit == check_digit)
        printf("VALID");
    else
        printf("NOT VALID");

    printf("\n");

    return 0;
}