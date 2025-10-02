#include <stdio.h>
void main()
{
    int a,b,c;

    printf("enter your fist no.: ");
    scanf("%d", &a);
        printf("enter your second no.: ");
    scanf("%d", &b);
        printf("enter your third no.: ");
    scanf("%d", &c);
    if(a<b&&a<c){printf("the fist no. (%d) is smallest.\n",a);
    }else if(b<a&&b<c)
    {printf("the second no. (%d) is smaller.\n",b);
    }
    {printf("the third no. (%d) is biggest.\n",c);}
}
