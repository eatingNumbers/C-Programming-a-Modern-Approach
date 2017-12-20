// Using Horner's Rule.

#include <stdio.h>

#define POLYNOMIAL(x) (((((3 * x + 2) * x - 5) * x - 5) * x + 7) * x - 6)

int main() {

    float user_input;

    printf("Enter a number: ");
    scanf("%f.2\n", &user_input);

    printf("Using Horner's rule, ");
    printf("The answer to: \n3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 or \n");
    printf("((((3x + 2)x-5)x - 1)x + 7)x - 6 is: %.2f\n", 
            POLYNOMIAL(user_input));

    return 0;
}
