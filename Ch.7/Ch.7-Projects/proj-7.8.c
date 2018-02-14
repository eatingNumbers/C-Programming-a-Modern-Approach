// NOT FINISHED.
#include <stdio.h>

int main() {

    int hour, minute, convert;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d", &hour, &minute);

    convert = hour * 60 + minute;

    if (convert < (8 * 60 + 45))
        printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.");
    else if (convert < (9 * 60 + 43 + 45))
        printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.");
    else if (convert < (11 * 60 + 19 + 45))
        printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.");
    else if (convert < (12 * 60 + 47 + 45))
        printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.");
    else if (convert < (14 * 60 + 45))
        printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.");
    else if (convert < (15 * 60 + 45 + 45))
        printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.");
    else if (convert <= (19 * 60 + 60))
        printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.");
    else 
        printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.");

    printf("\n");

    return 0;
}
