// Sums a series of numbers (using doubles).

#include <stdio.h>

int main() {

    double n, sum = 0;

    printf("This program sums a series of doubles.\n");
    printf("Enter double (0 to terminate): ");

    scanf("%lf", &n);

    while (n != 0) {
        sum += n;
        scanf("%lf", &n);
    }
    printf("The sum is: %.2lf\n", sum);

    return 0;
}
