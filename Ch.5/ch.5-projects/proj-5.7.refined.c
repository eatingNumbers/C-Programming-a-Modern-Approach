#include <stdio.h>

int main() {

    int first, second, third, fourth, largest, smallest;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &first, &second, &third, &fourth);

    largest = first;
    smallest = first;

    if (second > largest)
        largest = second;
    else
        smallest = second;

    if (third > largest)
        largest = third;
    else if (third < smallest)
        smallest = third;

    if (fourth > largest)
        largest = fourth;
    else if (fourth < smallest)
        smallest = fourth;

    printf("Largest: %d\n", largest);

    printf("Smallest: %d\n", smallest);

    return 0;
}
