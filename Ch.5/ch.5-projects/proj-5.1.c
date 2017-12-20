#include <stdio.h>

int main() {

    int user_input, count_digits;

    printf("Enter a number: ");
    scanf("%d", &user_input);
    
    if (user_input < 9)
        count_digits = 1;
    else if (user_input < 99)
        count_digits = 2;
    else if (user_input < 999)
        count_digits = 3;
    else if (user_input < 9999)
        count_digits = 4;
    else if (user_input < 99999)
        count_digits = 5;
    else {
        printf("Up to 5 digits only, please.\n");
        return 1;
    }

    printf("The number %d has %d digits.\n", user_input, count_digits);

    return 0;
}
