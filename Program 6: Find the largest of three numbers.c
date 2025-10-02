#include <stdio.h>

void main() {
    int num1, num2, num3;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter third number: ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3) {
        printf("The first number (%d) is the largest.\n", num1);
    } else if (num2 > num1 && num2 > num3) {
        printf("The second number (%d) is the largest.\n", num2);
    } else {
        printf("The third number (%d) is the largest.\n", num3);
    }
}
