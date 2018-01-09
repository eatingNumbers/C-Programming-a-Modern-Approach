#include <stdio.h>

int main() {

    int first_month, first_day, first_year;
    int second_month, second_day, second_year;
    int first_convert, second_convert;

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &first_month, &first_day, &first_year);
    first_convert = (first_month * 30) + (first_day + (first_year * 365));

    do {

        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &second_month, &second_day, &second_year);

        second_convert = (second_month * 30) + (second_day + (second_year * 365));

        if (first_convert == second_convert)
            printf("The dates are the same");

        if (first_convert > second_convert && second_convert != 0) {

            first_convert = second_convert;
            first_month = second_month;
            first_day = second_day;
            first_year = second_year;

        }

        if (second_month == 0 && second_day == 0 && second_year == 0)
            break;

    } while (1);

    printf("%d/%d/0%d is the earliest_date date", first_month, first_day, first_year);

    printf("\n");

    return 0;
}
