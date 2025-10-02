#include <stdio.h>

void main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 10 && num <= 99 && num % 2 != 0) {
        printf("The number is a two-digit even number.\n");
    } else {
        printf("The number is not a two-digit even number.\n");
    }
}
