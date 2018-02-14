// Suppose that i is a variable of type int, j is a variable of type long, and
// k is a variable of type unsigned int. What is type of the expression
// i + (int) j * k?

#include <stdio.h>

int main() {

    int i = 2;
    long j = 2;
    unsigned int k = 2;

    // The expression is type unsigned int since the explicit cast is only
    // applied to j and not k, according to the textbook.
    printf("%d\n", i + (int) j * k);
    return 0;
}
