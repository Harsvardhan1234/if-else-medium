#include <stdio.h>

void main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 4 == 0) {
        printf("The number is a multiple of 4.\n");
    } else {
        printf("The number is not a multiple of 4.\n");
    }
}
