#include <stdio.h>

int main() {

    int one, two, three, four, five, six, seven, eight, \
        nine, ten, eleven, twelve, thirteen, fourteen, fifteen, sixteen;
    int first_row_sum, second_row_sum, third_row_sum, fourth_row_sum, \
        first_column_sum, second_column_sum, third_column_sum, fourth_column_sum, \
        first_diagonal_sum, second_diagonal_sum;

    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", \
            &one, &two, &three, &four, \
            &five, &six, &seven, &eight,\
            &nine, &ten, &eleven, &twelve, \
            &thirteen, &fourteen, &fifteen, &sixteen);

    first_row_sum = one + two + three + four;
    second_row_sum = five + six + seven + eight;
    third_row_sum = nine + ten + eleven + twelve;
    fourth_row_sum = thirteen + fourteen + fifteen + sixteen;

    first_column_sum = one + five + nine + thirteen;
    second_column_sum = two + six + ten + fourteen;
    third_column_sum = three + seven + eleven + fifteen;
    fourth_column_sum = four + eight + twelve + sixteen;

    first_diagonal_sum = one + six + eleven + sixteen;
    second_diagonal_sum = thirteen + ten + seven + four;

    printf("Row sums: %d %d %d %d\n", first_row_sum, second_row_sum, third_row_sum, fourth_row_sum);
    printf("Column sums: %d %d %d %d\n", first_column_sum, second_column_sum, third_column_sum, fourth_column_sum);
    printf("Diagonal sums: %d %d\n", first_diagonal_sum, second_diagonal_sum);

    return 0;
}
