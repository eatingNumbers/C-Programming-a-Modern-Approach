#include <stdio.h>

// Program that asks user for a three-digit number and then prints it in reverse.

int main() {

    int input_digit_one;
    int input_digit_two;
    int input_digit_three;

    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &input_digit_one, &input_digit_two, &input_digit_three);

    printf("The reverse is: %d%d%d\n", input_digit_three, input_digit_two, input_digit_one);
    return 0;
}
