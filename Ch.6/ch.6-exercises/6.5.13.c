
#include <stdio.h>

int main() {

    int m, n;

    printf("Enter a number please: ");
    scanf("%d", &m);

    for (n = 0; m > 0; m /= 2, n++)

    printf("\tm = %d\n \tn = %d\n", m, n);

    return 0;
}
