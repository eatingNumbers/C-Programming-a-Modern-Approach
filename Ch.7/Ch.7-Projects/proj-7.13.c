#include <stdio.h>

int main() {

    char ch;
    float word = 1;

    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n') {

        if (ch == ' ')
            word++;
    }

    word /= 2;

    printf("Average word length: %.1f\n", word);
    return 0;
}
