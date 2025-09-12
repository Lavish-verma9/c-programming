#include <stdio.h>

int main(){

    int a ;
    printf("enter your income :");
    scanf("%d",&a);
    printf("income before tax : %d\n",a);
    if(a>=250000 && a<500000){
        printf("you have to pay tax : %d\n",(a*5)/100);
        printf("income after tax : %d \n",a-(a*5)/100);
    }
    else if(a>=500000 && a<1000000){
        printf("you have to pay tax : %d\n",(a*20)/100);
        printf("income after tax will be : %d\n",a-(a*20)/100);
    }
    else if(a>1000000){
        printf("you have to pay tax : %d\n",(a*30)/100);
        printf("income after tax  : %d \n",a-(a*30)/100);
    }
    else{
        printf("no tax ");
    }
    return 0;
}