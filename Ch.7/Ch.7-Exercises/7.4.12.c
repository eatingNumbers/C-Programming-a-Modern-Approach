// Suppose that i is a variable of type int, f is variable of type float, and
// d is a variable of type double. Explain what conversions take place during
// the execution of the following statement: d = i + f;

#include <stdio.h>

int main() {

    int i = 2;
    float f = 2.00;
    double d = 2.00;

    d = i + f;

    // Integer i is converted to float and the operation  i + f is executed.
    // The result is converted to double and stored in d.
    printf("%f\n", d);
    return 0;
}
