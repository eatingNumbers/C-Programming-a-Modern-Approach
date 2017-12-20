#include <stdio.h>

int main() {

    int user_input, first_digit, second_digit, third_digit, fourth_digit, fifth_digit;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &user_input);

    first_digit = user_input % 8;
    second_digit = (user_input / 8) % 8;
    third_digit = (user_input / 8 / 8) % 8;
    fourth_digit = (user_input / 8 / 8 / 8) % 8;
    fifth_digit = (user_input / 8 / 8 / 8 / 8) % 8;

    printf("In octal, your number is: %d", fifth_digit);
    printf("%d", fourth_digit);
    printf("%d", third_digit);
    printf("%d", second_digit);
    printf("%d\n", first_digit);

    /* printf("In octal, your number is: %o\n", user_input); */
    return 0;
}
