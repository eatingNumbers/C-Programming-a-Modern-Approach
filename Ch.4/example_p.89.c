#include <stdio.h>

int main() {

    int i = 2;
    int k = 2;

    int j = i * i++;
    int l = k * ++k;

    printf("%d\n", j);
    printf("%d\n", k);

    return 0;
}

