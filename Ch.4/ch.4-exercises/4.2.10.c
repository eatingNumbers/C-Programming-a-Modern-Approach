#include <stdio.h>

int main() {

    // (a)
    int i = 6, j;

    j = i += i;
    printf("%d %d\n", i, j); // My Answer: i = 12; j = 12;
                             // Correct Answer: i = 12; j = 12;

    // (b)
    int a = 5, b;

    b = (a -= 2) + 1;
    printf("%d %d\n", a, b); // My Answer: a = 3; b = 4;
                             // Correct Answer: a = 3; b = 4;

    // (c)
    int k = 5, l;

    l = 6 + (k = 2.5);
    printf("%d %d\n", k, l); // My Answer: k = 2.5; l = 8.5;
                             // Correct Answer: k = 2; l = 8;
                             // Remember that we're dealing with integers and
                             // not floats.
    
    // (d)
    int q = 5, w = 8;

    w = (q = 6) + (w = 3);
    printf("%d %d\n", q, w); // My Answer: q = 6; w = 9;
                             // Correct Answer: q = 6; w = 9;

    return 0;
}
