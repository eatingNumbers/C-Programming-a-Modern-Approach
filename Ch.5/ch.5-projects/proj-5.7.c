#include <stdio.h>

int main() {

    int first, second, third, fourth, largest, smallest;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &first, &second, &third, &fourth);

    if (first > second && first > third && first > fourth)
        largest = first;
    else if (second > first && second > third && second > fourth)
        largest = second;
    else if (third > first && third > second && third > fourth)
        largest = third;
    else
        largest = fourth;

    if (first < second && first < third && first < fourth)
        smallest = first;
    else if (second < first && second < third && second < fourth)
        smallest = second;
    else if (third < first && third < second && third < fourth)
        smallest = third;
    else
        smallest = fourth;

    printf("Largest: %d\n", largest);

    printf("Smallest: %d\n", smallest);

    return 0;
}
