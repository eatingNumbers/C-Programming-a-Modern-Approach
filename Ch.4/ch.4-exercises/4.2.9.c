#include <stdio.h>

int main() {

    // (a)
    int i = 7;
    int j = 8;

    /* i *= j + 1; */
    i = i * (j + 1);
    printf("(a): %d %d\n", i, j); // My Answer: i = 56; j = 8;
                           // Correct Answer: i = 63; j = 8;
                           
    // (b)
    int a, b, c;
    a = b = c = 1;
    a += b += c;
    printf("(b): %d %d %d\n", a, b, c); // My Answer: a = 3; b = 2; c = 1;
                                 // Correct Answer: a = 3; b = 2; c = 1;
    
    // (c)
    int q, w, e;
    q = 1;
    w = 2;
    e = 3;

    /* q -= w -= e; */
    q = q - (w -= e);
    printf("(c): %d %d %d\n", q, w, e); // My Answer: q = -4; w = -1; e = 3;
                                 // Correct Answer: q = 2; w = -1; e = 3;

    // (d)
    int u, y, o;
    u = 2;
    y = 1;
    o = 0;

    u *= y *= o;
    printf("(d): %d %d %d\n", u, y, o); // My Answer: u = 0; y = 0; o = 0;
                                 // Correct Answer: u = 0; y = 0; o = 0;

    return 0;
}
