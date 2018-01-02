
#include <stdio.h>

int main() {

    int i;

    // (a)
    printf("a: ");

    i = 0;
    while (i < 10) {
        printf("%d ", i++);
    }

    printf("\n");

    // (b)
    printf("b: ");
    i = 0;
    for (; i < 10;) {
        printf("%d ", i++);
    }

    printf("\n");

    // (c)
    printf("c: ");
    i = 0;
    do {
        printf("%d ", i++);
    } while (i < 10);

    printf("\n");

    return 0;
}
