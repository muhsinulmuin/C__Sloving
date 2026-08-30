/*Print ASCII Value*/

#include<stdio.h>

int main(){
    char c;

    printf("Enter your Number: ");
    scanf("%c", &c);

    printf("Show ASCII number: %d = %c", c, c);
    return 0;
}