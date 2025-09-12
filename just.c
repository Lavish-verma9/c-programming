/*Use if-else-if statements to display the grade:

Marks ≥ 90 → Grade A

Marks ≥ 75 → Grade B

Marks ≥ 50 → Grade C

Marks ≥ 33 → Grade D

Marks < 33 → Fail*/
#include <stdio.h>

int main(){
    int a;
    printf("enter the marks : ");
    scanf("%d",&a);
    if(a>90){
        printf("grade a \n");
    }
    else if(a>75){
        printf("grabe b \n");
    }
    else if(a>50){
        printf("grade c \n");
    }
    else if (a>33){
        printf("grade d \n");
    }
    else if (a<33){
        printf("fail \n");
    }
    switch(a>70){
        case 1:
            printf("excellent \n");
            break;
    }
    return 0;
}