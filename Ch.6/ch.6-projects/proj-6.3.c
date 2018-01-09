
#include <stdio.h>

int main() {

    int numerator, numer, denominator, denom, remainder;

    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);

    numer = numerator;
    denom = denominator;

    while (denominator != 0) {
        remainder = numerator % denominator;
        numerator = denominator;
        denominator = remainder;
    }

    numer /= numerator;
    denom /= numerator;

    printf("In lowest terms: %d/%d", numer, denom);

    printf("\n");

    return 0;
}
