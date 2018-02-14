// NOT FINISHED.
#include <stdio.h>

int main() {

    char first_initial, ch;

    printf("Enter a first and last name: ");

    first_initial = getchar();

    if ((ch = getchar()) == ' ') {
        while ((ch = getchar()) != '\n')
            putchar(ch);
    }

    printf(", %c\n", first_initial);

    return 0;
}
