#include <stdio.h>

int main() {

    int i = 0;
    int j = 0;
    int k = 0;

    printf("%d\n", i += 1);
    printf("%d\n", ++j); // Incremented first then printed.
    printf("%d\n", k++); // Printed first then incremented.

    return 0;
}
