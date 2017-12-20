// The if statement below is legal, however, it will always evaluate to TRUE
// regardless of the value of n.

#include <stdio.h>

int main() {

    int n = 0;

    if (n >= 1 <= 10)
        printf("n is between 1 and 10\n");
    return 0;
}
