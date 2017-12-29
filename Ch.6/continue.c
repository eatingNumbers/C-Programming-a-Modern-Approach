
#include <stdio.h>

int main() {

    int i, n, sum;

    n = 0;
    sum = 0;
    while (n < 10) {
        printf("Please enter a number: ");
        scanf("%d", &i);
        if (i == 0)
            continue;
        sum += i;
        n++;
    }

    return 0;
}
