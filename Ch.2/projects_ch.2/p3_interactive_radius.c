#include <stdio.h>

// Formula for Volume is: v = 4 / 3 PI r^3.
// Note that there's no exponentiation operator in C.
// So you'd have to multiply r by itself twice (r * r * r).

#define PI 3.14159
#define VOLUME (4.0f / 3.0f * PI) 
#define SQUARED(x) (x * x * x)

int main() {

    float sphere_radius;
    scanf("%f.2\n", &sphere_radius);

    printf("A sphere with a radius of %.2f is: ", sphere_radius);
    /* printf("%.2f\n", VOLUME * sphere_radius * sphere_radius * sphere_radius); */
    printf("%.2f\n", VOLUME * SQUARED(sphere_radius));

    return 0;
}
