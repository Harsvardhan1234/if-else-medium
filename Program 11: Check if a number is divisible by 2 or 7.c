#include <stdio.h>

void main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0 || num % 7 == 0) {
        printf("The number is divisible by 2 or 7.\n");
    } else {
        printf("The number is not divisible by 2 or 7.\n");
    }
}
