#include <stdio.h>

int main() {

    float income;

    printf("Please enter your income: ");
    scanf("%f", &income); 

    if (income <= 750)
        printf("Tax to be paid: %f", income * .01f);
    else if (income <= 2250)
        printf("Tax to be paid: %f", income * .02f + 7.50f);
    else if (income <= 3750)
        printf("Tax to be paid: %f", income * .03f + 37.50f);
    else if (income <= 5250)
        printf("Tax to be paid: %f", income * .05 + 82.50);
    else
        printf("Tax to be paid: %f", income * .06 + 230.00);

    printf("\n");

    return 0;
}
