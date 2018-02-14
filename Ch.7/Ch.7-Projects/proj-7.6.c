
#include <stdio.h>

int main() {

    printf("An int is %d bytes\n", (int) sizeof(int));
    printf("A short is %hd bytes\n", (short) sizeof(short));
    printf("A long is %.0ld bytes\n", sizeof(long));
    printf("A float is %.0f bytes\n", (float) sizeof(float));
    printf("A double is %.0lf bytes\n", (double) sizeof(double));
    printf("A long double is %.0LF bytes\n", (long double) sizeof(long double));

    return 0;
}
