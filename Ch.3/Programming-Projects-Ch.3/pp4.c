#include <stdio.h>

int main() {

    int area_code, first_three_digits, last_four;
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &area_code, &first_three_digits, &last_four);

    printf("You entered %d.%d.%d\n", area_code, first_three_digits, last_four);

    return 0;
}
