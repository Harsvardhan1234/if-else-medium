#include <stdio.h>

void main() {
    char ch;

    printf("Enter a charater: ");

    scanf("%c", &ch);
     if((ch>='A'&& ch<='Z')|| (ch>='a'&& ch<='z')){
        printf("the chatater is alphabet.\n");
     }else{
        printf("the chatater is not alphabet.\n");
     }

}
