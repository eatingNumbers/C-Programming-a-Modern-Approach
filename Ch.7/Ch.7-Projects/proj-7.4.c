#include <stdio.h>
#include <ctype.h>

int main() {

    char input, input_1, input_2, input_3, input_4, \
         input_5, input_6, input_7, input_8, input_9, \
         input_10, input_11, input_12, input_13, input_14;

    printf("Enter phone number: ");
    scanf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c", &input_1, &input_2, &input_3, &input_4, \
                              &input_5, &input_6, &input_7, &input_8, \
                              &input_9, &input_10, &input_11, &input_12, \
                              &input_13, &input_14);

    for (int i = 0; i < 14; i++) {

        if (i == 0)
            input = input_1;
        else if (i == 1)
            input = input_2;
        else if (i == 2)
            input = input_3;
        else if (i == 3)
            input = input_4;
        else if (i == 4)
            input = input_5;
        else if (i == 5)
            input = input_6;
        else if (i == 6)
            input = input_7;
        else if (i == 7)
            input = input_8;
        else if (i == 8)
            input = input_9;
        else if (i == 9)
            input = input_10;
        else if (i == 10)
            input = input_11;
        else if (i == 11)
            input = input_12;
        else if (i == 12)
            input = input_13;
        else if (i == 13)
            input = input_14;

        switch (toupper(input)) {
            case ('A'): case ('B'): case ('C'): printf("2"); break;
            case ('D'): case ('E'): case ('F'): printf("3"); break;
            case ('G'): case ('H'): case ('I'): printf("4"); break;
            case ('J'): case ('K'): case ('L'): printf("5"); break;
            case ('M'): case ('N'): case ('O'): printf("6"); break;
            case ('P'): case ('Q'): case ('R'): case ('S'): printf("7"); break;
            case ('T'): case ('U'): case ('V'): printf("8"); break;
            case ('W'): case ('X'): case ('Y'): case ('Z'): printf("9"); break;
            default: printf("%c", input);
        }
    }

    printf("\n");

    return 0;
}
