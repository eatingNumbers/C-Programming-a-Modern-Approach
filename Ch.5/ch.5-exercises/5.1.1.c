#include <stdio.h>

int main() {

    // (a)
    int i, j, k;
    i = 2;
    j = 3;

    k = i * j == 6;
    printf("(a):%d\n", k);
        // My Answer: 1
        // Correct Answer: 1

    // (b)
    int a, b, c;
    a = 5;
    b = 10;
    c = 1;

    printf("(b): %d\n", c > a < b);
        // My Answer: 1
        // Correct Answer: 1

    // (c)
    int m, n, o;
    m = 3;
    n = 2;
    o = 1;

    printf("(c): %d\n", m < n == n < o);
        // My Answer: 1
        // Correct Answer: 1

    // (d)
    int w, x, y;
    w = 3;
    x = 4;
    y = 5;

    printf("(d): %d\n", w % x + w < y);
        // My Answer: 1
        // Correct Answer: 0
            // 3 % 4 = 3
                // 3 + 3 = 6
                    // 6 < 5
                        // 0 or FALSE
                            // printf("(d): %d\n", ((w % x) + w) < y);

    return 0;
}
