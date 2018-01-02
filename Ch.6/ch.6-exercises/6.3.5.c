
#include <stdio.h>

int main() {

    int i, j, k;

    // (a)
    printf("a: ");

    i = 0;
    while (i < 10) {
        printf("%d ", i++);
    }

    printf("\n");

    // (b)
    printf("b: ");
    j = 0;
    for (; j < 10;) {
        printf("%d ", ++j);
    }

    printf("\n");

    // (c)
    printf("c: ");
    k = 0;
    do {
        printf("%d ", k++);
    } while (k < 10);

    printf("\n");

    return 0;
}
