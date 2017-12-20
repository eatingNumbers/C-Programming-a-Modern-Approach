// Write a single expression whose value is either -1, 0, or +1, depending
// on whether i is less than, equal to, or greater than j, respectively.

#include <stdio.h>

int main() {

    int i, j;
    i = 1;
    j = 1;

    // My Answer
    printf("My Answer: %d\n", (i < j) - (i > j));

    // Correct Answer
    printf("Correct Answer: %d\n", (i > j) - (i < j));
    return 0;
}
