// Which of the following is not a legal way to write the number 65?
// Assuming that the character set is ASCII.

#include <stdio.h>

int main() {

    // (a): 'A'
    printf("(a): %d\n", 'A');

    // (b): 0b1000001
    printf("(b): %d\n", 0b10000001);

    // (c): 0101:
    printf("(c): %d\n", 0101);

    // (d): 0x41
    printf("(d): %d\n", 0x41);

    return 0;
}
