// Arithmetic conversions in action.

#include <stdio.h>

int main() {

    char c = 'A';
    short int s = 65;
    int i = 32;
    unsigned int u = 40;
    long int l = 50;
    unsigned long int ul = 60;
    float f = 71.23;
    double d = 100;
    long double ld = 120;

    i = i + c;      // c is converted to int
    i = i + s;      // s is converted to int
    u = u + i;      // i is converted to unsigned int
    l = l + u;      // u is converted to long int
    ul = ul + l;    // l is converted to unsigned long int
    f = f + ul;     // ul is converted to float
    d = d + f;      // f is converted to double
    ld = ld + d;    // d is converted to long double

    return 0;
}
