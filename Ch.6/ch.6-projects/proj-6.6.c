
#include <stdio.h>

int main() {

    int user_input, square;

    printf("Please enter a number: ");
    scanf("%d", &user_input);

    square = 0;
    int i = 2;
    while (square < user_input) {

        square = i * i;
        printf("%d\n", square);
        i += 2;
    }
        
    return 0;
}
