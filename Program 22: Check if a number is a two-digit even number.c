    # include <stdio.h>
    void main(){
    int a;
    printf("enter the number:");
    scanf("%d ",&a);

    if(a>=10 && a<=99 && a % 2 ==0)
     {
        printf("The number is a two-digit even number. %d\n",a);
    }else{
         printf("The number is not a two-digit even number. %d\n",a);
    }
    }
