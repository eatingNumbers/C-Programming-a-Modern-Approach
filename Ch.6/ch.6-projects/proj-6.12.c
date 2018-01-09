// Solution source:
// @https://stackoverflow.com/questions/3028282/an-efficient-way-to-compute-mathematical-constant-e#3030127

#include <stdio.h>
#include <math.h>

int main() {

    long double e = 0, j = 1;
    float i;

    printf("Please enter a floating point number: ");
    scanf("%f", &i);

    for (; i >= 1; i--) {

        j *= i;
        e += j;

    }

    e /= j;
    printf("e = %.64Lf\n", e);
    printf("e = %.64Lf\n", expl(1));
    printf("e = %Lg\n", e - expl(1));
    printf("e = %d\n", e == expl(1));
    printf("\n");

    return 0;
}
