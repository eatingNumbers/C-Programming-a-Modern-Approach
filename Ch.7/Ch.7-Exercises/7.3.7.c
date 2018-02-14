// For each of the following character escapes, give the equivalent octal
// escape.
// Assume that the character set is ASCII.

#include <stdio.h>

int main() {

    // (a): \b
    printf("(a): %o\n", '\b');
    
    // (b): \n
    printf("(b): %o\n", '\n');
    
    // (c): \r
    printf("(c): %o\n", '\r');

    // (d): \t
    printf("(d): %o\n", '\t');

    return 0;
}
