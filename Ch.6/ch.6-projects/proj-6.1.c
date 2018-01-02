
#include <stdio.h>

int main() {

    float user_input, user_input2, largest_number;

    while (1) {

        printf("Enter a number: ");
        scanf("%f", &user_input);

        user_input2 = user_input;

        if (user_input == 0)
            break;
        if (user_input >= user_input2)
            largest_number = user_input2;

    }

    printf("The largest number entered was %f\n", largest_number);

    return 0;
}
