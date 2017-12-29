
#include <stdio.h>

int main() {

    int i, n, sum;

    sum = 0;

    for (n = 0; n < 10; n++) {
        printf("Please enter a number: ");
        scanf("%d", &i);
        if (i == 0)
            continue;
        sum += i;
    }

    return 0;
}
