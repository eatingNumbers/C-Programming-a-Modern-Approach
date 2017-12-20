#include <stdio.h>

int main() {

    // (a)
    int i = 1;
    printf("(a): %d ", i++ - 1);
    printf("%d\n", i);
        // My Answer: %d = 1; 
        // Correct Answer: i = 0; i = 2;
        
    // (b)
    int a = 10, b = 5;
    printf("(b): %d ", a++ - ++b);
    printf("%d %d\n", a, b);
        // My Answer: %d = 6; a = 7; b = 5;
        // Correct Answer: %d = 4; a = 11; b = 6;
        
    // (c)
    int q = 7, w = 8;
    printf("(c): %d ", q++ - --w);
    printf("%d %d\n", q, w);
        // My Answer: %d = 0; q = 8; w = 7;
        // Correct Answer: %d = 0; q = 8; w = 7;

    // (d)
    int z = 3, x = 4, c = 5;
    printf("(d): %d ", z++ - x++ + --c);
    printf("%d %d %d\n", z, x, c);
        // My Answer: %d = 3; z = 4; x = 5; c = 4;
        // Correct Answer: %d = 3; z = 4; x = 5; c = 4;

    return 0;
}
