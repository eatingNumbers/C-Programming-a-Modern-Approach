#include <stdio.h>

int main() {

    // (a)
    int i = 1, j = 2;
    printf("%d\n", i += j);
    
    // (b)
    int b = 1;
    printf("%d\n", b--);

    // (c)
    int c = 1, d = 2;
    printf("%d\n", c * d / c);

    // (d)
    int e = 1, f = 2;
    printf("%d\n", e % ++f);

    return 0;
}
