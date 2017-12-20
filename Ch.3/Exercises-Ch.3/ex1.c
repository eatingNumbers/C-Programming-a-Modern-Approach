#include <stdio.h>

int main() {

    printf("%6d, %4d\n", 86, 1040); // ****86, 1040
    printf("%12.5e\n", 30.253); // 3.02530e+02 <- WRONG, but close.
                                // Correct answer: 3.02530e+01
    printf("%.4f\n", 83.162); // 83.1620
    printf("%-6.2g\n", .0000009979); // .0000009979******* <- WRONG
                                     // Correct answer: 1e-06

    return 0;
}
