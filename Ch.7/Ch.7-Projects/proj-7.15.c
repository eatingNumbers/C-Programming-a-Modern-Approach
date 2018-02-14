// NOT FINISHED!
#include <stdio.h>

int main() {

    short input, factorial;

    printf("Enter a positive integer: ");
    scanf("%hu", &input);

    factorial = input * (input - 1);

    for (int i = input - 2; i > 0; i--) {

        factorial *= i;
    }

    printf("Square root: %hu\n", factorial);

    return 0;
}
