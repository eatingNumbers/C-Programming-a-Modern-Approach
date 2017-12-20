#include <stdio.h>

int main() {

    int first_digit, second_digit;

    printf("Enter a numerical grade: ");
    scanf("%1d %1d", &first_digit, &second_digit);

    // Test scanf input.
    /* printf("first digit: %d", first_digit); */
    /* printf("second digit: %d", second_digit); */

    switch (first_digit) {
        case 9: printf("Letter grade: A"); break;
        case 8: printf("Letter grade: B"); break;
        case 7: printf("Letter grade: C"); break;
        case 6: printf("Letter grade: D"); break;
        case 5: 
        default: printf("Letter grade: F"); break; 
    }

    printf("\n");

    return 0;
}
