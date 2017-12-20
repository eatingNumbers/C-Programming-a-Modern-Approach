#include <stdio.h>

int main() {

    int hour, minute;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    if (hour > 12 && hour <= 24) {
        if (hour == 13)
            hour = 1;
        else if (hour == 14)
            hour = 2;
        else if (hour == 15)
            hour = 3;
        else if (hour == 16)
            hour = 4;
        else if (hour == 17)
            hour = 5;
        else if (hour == 18)
            hour = 6;
        else if (hour == 19)
            hour = 7;
        else if (hour == 20)
            hour = 8;
        else if (hour == 21)
            hour = 9;
        else if (hour == 22)
            hour = 10;
        else if (hour == 23)
            hour = 11;
        else 
            hour = 12;

        printf("Equivalent 12-hour time: %d:%d PM\n", hour, minute); 

    } else if (hour > 0 && hour <= 12)
        printf("Equivalent 12-hour time: %d:%d AM\n", hour, minute);
    else
        printf("Equivalent 12-hour time: 12:%d AM\n", minute);


    return 0;
}
