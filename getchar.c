#include <stdio.h>
int main() {
    char name[20];
    char ch;
    
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);             // unformatted input
    printf("Hello ");
    puts(name);             // unformatted output

    printf("Enter a character: ");
    ch = getchar();         // input single char
    printf("You entered: ");
    putchar(ch);            // output single char
    return 0;
}
