#include <stdio.h>

int main() {

    int m, d, y;

    printf("Please enter a date (mm/dd/yyyy): \n");
    scanf("%d/%d/%d", &m, &d, &y);

    printf("You entered the date %d%2.2d%d\n", y, m, d);

    return 0;
}
