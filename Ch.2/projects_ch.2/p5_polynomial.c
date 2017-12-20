#include <stdio.h>

#define POLYNOMIAL(x) ((3 * (x * x * x * x * x)) + (2 * (x * x * x *x)) - \
                        (5 * (x * x * x)) - (x * x) + (7 * x) - 6)
int main() {

    float user_input;

    printf("Enter a number: ");
    scanf("%f.2\n", &user_input);

    printf("The answer to 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 is: %.2f\n", 
            POLYNOMIAL(user_input));
    return 0;
}
