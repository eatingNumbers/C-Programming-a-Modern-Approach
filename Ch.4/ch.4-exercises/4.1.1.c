#include <stdio.h>

int main() {

    // (a)
    int i = 5, j = 3;
    printf("%d %d\n", i / j, i % j); // My Answer: 1, 2.
                                     // Correct Answer: 1, 2.

    // (b)
    int k = 2, l = 3;
    printf("%d\n", (k + 10) % l); // My Answer: 0.
                                  // Correct Answer: 0.

    // (c)
    int a = 7, b = 8, c = 9;
    printf("%d\n", (a + 10) % c / b); // My Answer: 0.
                                      // Correct Answer: 1.

    // (d)
    int q = 1, w = 2, e = 3;
    printf("%d\n", (q + 5) % (w + 2) / e); // My Answer: 0.
                                           // Correct Answer: 0.
    return 0;
}
