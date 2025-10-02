#include <stdio.h>

void main() {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("The first number (%d) is larger.\n", num1);
    } else {
        printf("The second number (%d) is larger or equal.\n", num2);
    }
}
