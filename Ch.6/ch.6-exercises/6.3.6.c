
#include <stdio.h>

int main() {

    for (int i = 1; i <= 128; i *= 2)
        printf("%d ", i);

    printf("\n");

    for (int i = 128; i >= 1; i /= 2)
        printf("%d ", i);

    printf("\n");

    return 0;
}
