// The printf statement will always print 17 even if the value of the variable
// i is -17.
// Notice the third expression in the conditional operator, it's a -i.
// A negative and a negative produces a positive number.

#include <stdio.h>

int main() {

    int i;
    /* i = 17; */
    i = -17;

    printf("%d\n", i >= 0 ? i : -i);

    // The above printf statment with the conditional operator can be rewritten
    // as:

    if (i >= 0)
        printf("%d\n", i);
    else
        printf("%d\n", -i);

    return 0;
}
