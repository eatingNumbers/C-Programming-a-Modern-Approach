#include <stdio.h>

int main() {

    int i = 1;

    switch (i % 3) {
        case 0: printf("zero");
        case 1: printf("one"); // It would print this line
        case 2: printf("two"); // and this line since there are no break statements.
                               // 1 % 3 = 1
    }   

    printf("\n");

    return 0;
}
