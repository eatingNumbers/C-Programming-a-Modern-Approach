#include <stdio.h>

int main() {

    int GS1_prefix, group_identifier, publisher_code, item_number, check_digit;
    
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", \
            &GS1_prefix,
            &group_identifier,
            &publisher_code, 
            &item_number, 
            &check_digit);

    printf("GS1 prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n", \
            GS1_prefix,
            group_identifier,
            publisher_code,
            item_number,
            check_digit);

    return 0;
}
