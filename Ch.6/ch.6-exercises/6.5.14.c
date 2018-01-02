
#include <stdio.h>

int main() {

    int n = 10;

    printf("Enter a number please: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("n is even\n");
    return 0;
}
