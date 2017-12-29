
#include <stdio.h>

int main() {

    int i, j, k;

    printf("a: ");

    // (a)
    for (i = 0; i < 10; i++)
        printf("%d ", i);

    printf("\n");
    printf("b: ");

    // (b)
    for (j = 0; j < 10; ++j)
        printf("%d ", j);

    printf("\n");
    printf("c: ");

    // (c)
    for (k = 0; k++ < 10; )
        printf("%d ", k);

    printf("\n");

    return 0;
}
