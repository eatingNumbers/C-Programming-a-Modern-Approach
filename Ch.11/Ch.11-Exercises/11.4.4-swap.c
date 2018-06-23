#include <stdio.h>

void swap(int *p, int *q);

int main() {

    int i = 3, j = 5;

    printf("Before swap: i = %d, j = %d\n", i, j);

    swap(&i, &j);

    printf("After swap: i = %d, j = %d\n", i, j);

    return 0;
}

void swap(int *p, int *q) {

    int temp;

    temp = *p;
    *p = *q;
    *q = temp;
}
