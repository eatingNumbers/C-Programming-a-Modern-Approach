// Suppose that i is a variable of type int, f is a variable of type float, and
// d is a variable of type double. What is the type of the expression i * f / d?

#include <stdio.h>

int main() {

    int i = 2;
    float f = 2.00;
    double d = 2;

    // Expression type is double.
    printf("%lf\n", i * f / d);
    return 0;
}
