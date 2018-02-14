// Does the following statement always compute the fractional part of
// f correctly (assuming that f and frac_part are float variables)?

#include <stdio.h>

int main() {

    float f = 212341324123414.3, frac_part;

    // Casting f to int will lose the fractional part thus the result will be
    // that missing fraction assigned to frac_part.
    // Also note that converting f to int will fail if the value stored in
    // f exceeds the largest value of type int.
    frac_part = f - (int) f;

    printf("%f\n", frac_part);

    return 0;
}
