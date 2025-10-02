    # include <stdio.h>
    void main(){
    int a, b, c;
    printf("enter three side of the triangle:");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b || b==c || c==a){
        printf("the triangle is isomertic\n");
    }else{
    printf("the triangle is not isomertic\n");
    }
    }
