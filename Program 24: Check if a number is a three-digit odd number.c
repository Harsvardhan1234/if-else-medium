        # include <stdio.h>
        void main(){
        int a;
        printf("enter the number:");
        scanf("%d",&a);

        if(a >=100 && a <=999 && a % 2 !=0)
        {
            printf("The number is a three-digit odd number. %d\n",a);
        }else{
            printf("The number is not a three-digit odd number. %d\n",a);
        }
        }
