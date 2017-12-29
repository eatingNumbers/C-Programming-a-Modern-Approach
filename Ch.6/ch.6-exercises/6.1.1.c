
#include <stdio.h>

int main() {

    int i = 1;
    while (i <= 128) {
        printf("%d ", i);
        i *= 2;
    }
    printf("\n");

    i /= 2;

    while (i >= 1) {
        printf("%d ", i);
        i /= 2;
    }

    printf("\n");
    return 0;
}
