// Print a one-month calendar.

#include <stdio.h>

int main() {
int days, start_of_week, end_of_week;

    printf("Enter number of days in month: ");
    scanf("%d", &days);

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start_of_week);

    end_of_week = 7;

    for (int j = 1; j <= start_of_week * 2; j++) {
        printf(" ");
    }

    for (int i = 1; i <= days; i++) {

        printf("%2d ", i);
        if (i == end_of_week - (start_of_week - 1)) {
            printf("\n");
            end_of_week += 7;
        }
    }

    printf("\n");
    return 0;
}
