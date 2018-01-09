
#include <stdio.h>

int main() {

    int m, n, x;

    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);

    if (n == 0)
        x = m;
    else
        while (n != 0) {
            x = m % n;
            m = n;
            n = x;
        }

    printf("Greatest common divisor: %d\n", m);

    return 0; 

}
