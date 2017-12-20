// Note that there is no difference between these two sets of cascading if
// statements despite the ordering of each statement.

#include <stdio.h>

int main() {

    int score;
    score = 50;

    printf("Top down scores: ");

    if (score >= 90)
        printf("A");
    else if (score >= 80)
        printf("B");
    else if (score >= 70)
        printf("C");
    else if (score >= 60)
        printf("D");
    else
        printf("F");

    printf("\n\nInverted scores: ");

    if (score < 60)
        printf("F");
    else if (score < 70)
        printf("D");
    else if (score < 80)
        printf("C");
    else if (score < 90)
        printf("B");
    else
        printf("A");

    printf("\n");

    return 0;
}
