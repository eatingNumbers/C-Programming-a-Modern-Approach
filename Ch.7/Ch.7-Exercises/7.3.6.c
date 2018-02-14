// For each fo the following items of data, specify which one of the types char,
// short, int, or long is the smallest one guaranteed to be large enough to
// store the item.

#include <stdio.h>

int main() {

    short int days_per_month = 30, days_per_year = 365, minutes_per_day = 60 * 24;
    int seconds_per_day = 60 * 24 * 60;

    // (a): Days in a month
    printf("%d\n", days_per_month);
    // (b): Days in a year
    printf("%d\n", days_per_year);
    // (c): Minutes in a day
    printf("%d\n", minutes_per_day);
    // (d): Seconds in a day
    printf("%d\n", seconds_per_day);

    return 0;
}
