#include <stdio.h>

int main() {

    int first_month, first_day, first_year;
    int second_month, second_day, second_year;
    int first_convert, second_convert;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &first_month, &first_day, &first_year);

    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &second_month, &second_day, &second_year);

    first_convert = (first_month / 12 / 30) + (first_day + (first_year * 365));
    second_convert = (second_month / 12 / 30) + (second_day + (second_year * 365));

    // See ressult of converted inputs.
    /* printf("First input: %d\n", first_convert); */
    /* printf("First input: %d\n", second_convert); */

    if (first_convert == second_convert)
        printf("The dates are the same");
    else if (first_convert < second_convert)
        printf("%d/%d/%d is earlier than %d/%d/%d", first_month, first_day, first_year, second_month, second_day, second_year);
    else
        printf("%d/%d/%d is earlier than %d/%d/%d", second_month, second_day, second_year, first_month, first_day, first_year);

    printf("\n");

    return 0;
}
