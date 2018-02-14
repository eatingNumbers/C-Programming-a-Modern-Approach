// Use the typedef to create types named Int8, Int16, and Int32.
// Define the types so that they represent 8-bit, 16-bit, and 32-bit integers on
// your machine.

#include <stdio.h>

typedef char Int8;
typedef unsigned short int Int16;
typedef int Int32;

int main() {

    printf("Int8 is %ld byte\n", sizeof(Int8));
    printf("Int16 is %ld bytes\n", sizeof(Int16));
    printf("Int32 is %ld bytes\n", sizeof(Int32));
    return 0;
}
