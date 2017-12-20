#include <stdio.h>

int main() {

    // a
    printf("|%-8.1e|\n", 120.888);

    // b
    printf("|%10.6e|\n", 120.888);

    // c
    printf("|%-8.3f|\n", 120.888);

    // d
    printf("|%6.f|\n", 120.888);

    return 0;
}
