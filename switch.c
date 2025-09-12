#include <stdio.h>

int main(){
    int a;
    printf("enter the number a:");
    scanf("%d",&a);
    switch(a){
        case 1:
            printf("you entered one");
            break;
        case 2:
            printf("you entered two");
            break;
    }
    return 0;
}