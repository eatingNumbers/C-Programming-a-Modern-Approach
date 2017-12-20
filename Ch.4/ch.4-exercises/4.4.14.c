#include <stdio.h>

int main() {

    int a, b, c, d, e;
    a = 1;
    b = 2;
    c = 3;
    d = 4;
    e = 5;

    printf("%d\n", a * b - c * d + e);
    printf("%d\n", a / b % c / d);
    printf("%d\n", - a - b + c - + d);
    printf("%d\n", a * - b / c / d);

    return 0;
}
