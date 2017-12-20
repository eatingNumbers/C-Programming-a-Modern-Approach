#include <stdio.h>

// Program that asks user for a two-digit number and then prints it in reverse.

int main() {

    int input_digit_one;

    printf("Enter a two-digit number: ");
    scanf("%d", &input_digit_one);

    printf("The reverse is: %d", input_digit_one % 10);
    printf("%d\n", input_digit_one / 10);
    return 0;
}
