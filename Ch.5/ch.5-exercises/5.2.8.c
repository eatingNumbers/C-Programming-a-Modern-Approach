#include <stdio.h>
#include <stdbool.h>

int main() {

    bool teenager;
    teenager = true;
    int age;
    age = 10;

    printf("Using complicated if statement:\n");
    printf("-------------------------------\n\n");

    if (age >= 13) 
        if (age <= 19) 
            teenager = true;
         else
            teenager = false;
     else if (age < 13)
        teenager = false;

    if (teenager)
        printf("Person is a teenager.\n");
    else
        printf("Person is not a teenager.\n\n");

    printf("Using simplified if statement:\n");
    printf("------------------------------\n\n");

    if (age >= 13 && age <= 19) {
        teenager = true;
        printf("Person is a teenager.\n");
    } else
        printf("Person is not a teenager.\n");
    return 0;
}
