#include <stdio.h>

int main() {

    // (a)
    int i, j, k;
    i = 3;
    j = 4;
    k = 5;

    printf("(a): %d ", i < j || ++j < k);
    printf("%d %d %d\n", i, j, k);
        // My Answer: 1, 3, 5, 5
        // Correct Answer: 1, 3, 4, 5
            // Incrementing within the printf statement will not change the
            // value of the variable as it was declared.
            // It will only change for that printf statement.

    // (b)
    int a, b, c;
    a = 7;
    b = 8;
    c = 9;

    printf("(b): %d ", a - 7 && b++ < c);
    printf("%d %d %d\n", a, b, c);
        // My Answer: 0, 7, 8, 9
        // Correct Answer: 0, 7, 8, 9

    // (c)
    int m, n, o;
    m = 7;
    n = 8;
    o = 9;

    printf("(c): %d ", (m = n) || (n = o));
    printf("%d %d %d\n", m, n, o);
        // My Answer: 1, 7, 8, 9
        // Correct Answer: 1, 8, 8, 9
            // Since the first printf statement has a logical OR, only the first
            // expression will be evaluated thus the n is not assigned the value
            // of o.
            // The reassignment of the variable m actually changes.

    // (d)
    int x, y, z;
    x = 1;
    y = 2;
    z = 3;

    printf("(d): %d ", ++x || ++y && ++z);
    /* printf("(d): %d ", (++x || ++y) && ++z); */
    /* The parentheses will separate the expressions thus will also increment
     * the z  variable. */
    printf("%d %d %d\n", x, y, z);
        // My Answer: 1, 1, 2, 3
        // Correct Answer: 1, 2, 2, 3
            //  x is incremented only since it will always result a 1 so the
            //  logical OR doesn't trigger the evaluation of the second
            //  expression, which is to increment y.

    return 0;
}
