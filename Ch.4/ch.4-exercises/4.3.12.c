#include <stdio.h>

int main() {

    // (a)
    int i = 5, j;
    j = ++i * 3 - 2;
    printf("(a): %d %d\n", i, j);
        // My Answer: i = 6; j = 13;
        // Correct Answer: i = 6; j = 16;

    // (b)
    int q = 5, w;
    w = 3 - 2 * q++;
    printf("(b): %d %d\n", q, w);
        // My Answer: q = 5; w = 5;
        // Correct Answer: q = 6; w = -7;
    
    return 0;
}
