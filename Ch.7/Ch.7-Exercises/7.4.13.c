
#include <stdio.h>

int main() {

    char c = '\1';
    short s = 2;
    int i = -3;
    long m = 5;
    float f = 6.5f;
    double d = 7.5;

    // (a): c * i
    printf("(a): %d\n", c * i);
    
    // (b): s + m
    printf("(b): %ld\n", s + m);

    // (c): f / c
    printf("(c): %f\n", f / c);

    // (d): d / s
    printf("(d): %lf\n", d / s);

    // (e): f - d
    printf("(e): %lf\n", f - d);

    // (f): (int) f
    printf("(f): %d\n", (int) f);

    return 0;
}
