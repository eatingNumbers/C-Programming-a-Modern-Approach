#include <stdio.h>

int main() {

    int first_digit, second_digit;

    printf("Enter a two-digit number: ");
    scanf("%1d %1d", &first_digit, &second_digit);

    // Test
    // printf("first digit: %d\n", first_digit);
    // printf("second digit: %d\n", second_digit);

    printf("You entered the number ");

    if (first_digit == 1 && second_digit == 0)
        printf("ten");
    else if (first_digit == 1 && second_digit == 1)
        printf("eleven");
    else if (first_digit == 1 && second_digit == 2)
        printf("twelve");
    else if (first_digit == 1 && second_digit == 3)
        printf("thirteen");
    else if (first_digit == 1 && second_digit == 4)
        printf("fourteen");
    else if (first_digit == 1 && second_digit == 5)
        printf("fifteen");
    else if (first_digit == 1 && second_digit == 6)
        printf("sixteen");
    else if (first_digit == 1 && second_digit == 7)
        printf("seventeen");
    else if (first_digit == 1 && second_digit == 8)
        printf("eighteen");
    else if (first_digit == 1 && second_digit == 9)
        printf("nineteen");
    else {
        switch (first_digit) {
            case 2: printf("twenty");
                    break;
            case 3: printf("thirty");
                    break;
            case 4: printf("forty");
                    break;
            case 5: printf("fifty");
                    break;
            case 6: printf("sixty");
                    break;
            case 7: printf("seventy");
                    break;
            case 8: printf("eighty");
                    break;
            case 9: printf("ninety");
                    break;
        } 

        printf("-");
        switch (second_digit) {
            case 1: printf("one");
                    break;
            case 2: printf("two");
                    break;
            case 3: printf("three");
                    break;
            case 4: printf("four");
                    break;
            case 5: printf("five");
                    break;
            case 6: printf("six");
                    break;
            case 7: printf("seven");
                    break;
            case 8: printf("eight");
                    break;
            case 9: printf("nine");
                    break;
        }

}
    printf(".");
    printf("\n");

    return 0;
}
