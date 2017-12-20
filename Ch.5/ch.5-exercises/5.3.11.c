// Note that you don't need the parentheses for the case statement.
// It's just a stylistic preference.
// Might want to go without it if you want your program to be as small as
// possible.

#include <stdio.h>

int main() {

    int area_code;

    printf("Give me an area code in the state of Georgia: ");
    scanf("%d", &area_code);

    switch (area_code) {
        case (229): printf("Albany"); break;
        case (404): case (470): case (678): case (770): printf("Atlanta"); break;
        case (706): case (762): printf("Columbus"); break;
        case (478): printf("Macon"); break;
        case (912): printf("Savannah"); break;
        default: printf("Sorry, that area code is not in the state of Georgia."); break;
    }

    printf("\n");

    return 0;
}
