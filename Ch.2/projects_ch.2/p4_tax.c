#include <stdio.h>

#define TAX .05

int main() {

    float user_input;

    printf("Enter an amount: ");
    scanf("%f.2\n", &user_input);

    float total_with_tax =user_input + user_input * TAX;
    printf("With tax added: %.2f\n", total_with_tax);
    return 0;
}

