#include <stdio.h>
#include <math.h>

int main(){
    int a;
    int b;
    char o;
    printf("enter the number a you want to calculate :\n");
    scanf(" %d",&a);
    printf("enter the operator (+,-,/,^,*):\n");
    scanf(" %c",&o);
    printf("enter the number b you want to calculate with a :\n");
    scanf(" %d",&b);
    if (o=='+'){
        printf(" your answer is : %d ",a+b);
    }
    else if (o=='/'){
        printf(" your answer is : %d ",a/b);
    }
    else if (o=='-'){
        printf("your answer is : %d ",a-b);
    }
    else if (o=='*'){
        printf(" your answer is : %d ",a*b);
    }
    else if (o=='%'){
        printf("your answer is : %d ",a%b);
    }
    else if (o=='^'){
        printf("your answer is  : %lf ",pow(a , b));
    }
    else {
        printf("u can only *,-,/,**,(remainder) use this operator");
    }
    return 0;
}