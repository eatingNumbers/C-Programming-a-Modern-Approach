#include <stdio.h>

int main() {

    int wind_speed;

    printf("Enter wind speed (in knots): ");
    scanf("%d", &wind_speed);

    if (wind_speed < 1)
        printf("Beaufort scale: Calm");
    else if (wind_speed <= 3)
        printf("Beaufort scale: Light air");
    else if (wind_speed <= 27)
        printf("Beaufort scale: Breeze");
    else if (wind_speed <= 47)
        printf("Beaufort scale: Gale");
    else if (wind_speed <= 63)
        printf("Beaufort scale: Storm");
    else
        printf("Beaufort scale: Hurricane");

    printf("\n");

    return 0;
}
