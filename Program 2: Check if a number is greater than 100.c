#include <stdio.h>

void main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 100) {
        printf("The number is greater than 100.\n");
    } else {
        printf("The number is not greater than 100.\n");
    }
}
