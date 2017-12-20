#include <stdio.h>

int main() {

    // (a)
    int i, j;
    i = 10;
    j = 5;

    /* printf("%d\n", !i < j); */
    /* The above is the same as below, however, the one below
     * will not generate an error. */

    printf("(a): %d\n", j > !i);
        // My Answer: 1
        // Correct Answer: 1

    // (b)
    int a, b;
    a = 2;
    b = 1;

    printf("(b): %d\n", !!a + !b);
        // My Answer: 1
        // Correct Answer: 1

    // (c)
    int m, n, o;
    m = 5;
    n = 0;
    o = -5;

    /* printf("%d\n", m && n || o); */
    // The above printf statement is the same as below; however, it generates
    // a compiler error.

    printf("(c): %d\n", (m && n) || o);
        // My Answer: 1
        // Correct Answer: 1

    // (d)
    int w, x, y;
    w = 1;
    x = 2;
    y = 3;

    printf("(d): %d\n", w < x || y);
        // My Answer: 1
        // Correct Answer: 1

    return 0;
}
