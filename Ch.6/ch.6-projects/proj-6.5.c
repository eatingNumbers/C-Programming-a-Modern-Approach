#include <stdio.h>

// Program that asks user for a two-digit number and then prints it in reverse.

int main() {

    int input_digit, reduce, reverse;

    printf("Enter a number: ");
    scanf("%d", &input_digit);

    reduce = input_digit;

    printf("The reverse is: ");

    do {

        reverse = reduce % 10;
        reduce = reduce / 10;

        printf("%d", reverse);

    } while (reduce != 0);

    printf("\n");

    return 0;
}
