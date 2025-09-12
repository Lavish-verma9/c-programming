#include <stdio.h>

int main(){
    int a;
    printf("enter the integer: ");
    scanf("%d",&a);
    if(a>50){
        printf("a is greater than 50");
    }
    else if(a<50){
        printf("a is less than 50");
    }
    else{
        printf("invalid input");
    }
return 0;
}