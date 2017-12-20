// The if statement below is legal and will not produce an error.
// However, it does nothing since n does not equal -9.
// 1-10 is an equation: 1 - 10 = -9

#include <stdio.h>

int main() {

    int n = 9;

    if (n == 1-10)
        printf("n is between 1 and 10\n");
    return 0;
}
