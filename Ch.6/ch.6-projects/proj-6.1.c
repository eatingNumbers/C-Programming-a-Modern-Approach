#include <stdio.h>

int main() {

    float user_input, user_input2, user_input3, largest_number;

    printf("Enter a number: ");
    scanf("%f", &user_input);

    while (user_input != 0) {

        printf("Enter a number: ");
        scanf("%f", &user_input2);

        if (user_input2 == 0)
            break;
        else if (user_input >= user_input2)
            largest_number = user_input;
        else if (user_input <= user_input2)
            largest_number = user_input2;
        else if (user_input >= user_input3)
            largest_number = user_input;
        else
            largest_number = user_input3;

        user_input2 = user_input;
        user_input3 = user_input2;

    }

    printf("The largest number entered was %.2f\n", largest_number);

    return 0;
}
