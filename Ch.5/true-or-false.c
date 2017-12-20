#include <stdio.h>

int main() {

    int true, false, error;
    true = 1;
    false = 0;
    error = -1;

    if (true) {
        printf("A nonzero number means TRUE in C.\n");
    }

    if (!false) {
        printf("A zero means FALSE in C.\n");
    }

    if (error) {
        printf("A negative number in an evaluation means an error in C.\n");
    }

    return 0;
}
