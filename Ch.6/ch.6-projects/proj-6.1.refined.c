#include <stdio.h>

int main() {

    float user_input, largest_number;

        printf("Enter a number: ");
        scanf("%f", &user_input);

        largest_number = user_input;

    while (user_input != 0) {

        printf("Enter a number: ");
        scanf("%f", &user_input);

        if (user_input == 0)
            break;

        if (user_input > largest_number)
            largest_number = user_input;

    }

    printf("The largest number entered was %.2f\n", largest_number);

    return 0;
}
