#include <stdio.h>

// Program that asks user for a three-digit number and then prints it in reverse.

int main() {

    int input_digit;

    printf("Enter a three-digit number: ");
    scanf("%d", &input_digit);

    printf("The reverse is: %d%d%d\n", input_digit % 10, (input_digit / 10) % 10, input_digit / 100);
    return 0;
}
