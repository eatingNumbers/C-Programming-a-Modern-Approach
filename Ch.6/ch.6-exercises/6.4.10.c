
#include <stdio.h>

int main() {

    int i = 0;

    /* while (i < 100) { */
        /* printf("Give me a number: "); */
        /* scanf("%d", &i); */
    /*     if (i == 50) */
    /*         goto done; */
    /*     printf("You're number is: %d\n", i); */
    /*     i++; */
    /* } */

    /* done : ; */

    while (i < 100) {
        printf("Give me a number: ");
        scanf("%d", &i);
        if (i == 50)
            continue;
        printf("You're number is: %d\n", i);
        i++;
    }

    printf("Out of the loop.");

    return 0;
}
