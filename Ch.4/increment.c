#include <stdio.h>

int main() {

    int i = 1;
    int j = 2;
    int k = ++i + j++;
    printf("k is %d\n", k);

    return 0;
}

