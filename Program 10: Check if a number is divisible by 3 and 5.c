#include <stdio.h>

void main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0) {
        printf("The number is divisible by 3 and 5.\n");
    } else {
        printf("The number is not divisible by 3 and 5.\n");
    }
}
