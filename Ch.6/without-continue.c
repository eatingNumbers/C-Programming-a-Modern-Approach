
#include <stdio.h>

int main() {

    int i, n, sum;

    n = 0;
    sum = 0;
    while (n < 10) {
        scanf("%d", &i);
        if (i != 0) {
            sum += i;
            n++;
        }
    }

    return 0;
}
