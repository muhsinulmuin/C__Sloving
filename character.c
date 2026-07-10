#include<stdio.h>

int main(){

    char grade;

    printf("Enter Your Grade = %c", &grade);
    scanf("%c", &grade);

    printf("Grade = %c\n", grade);
    return 0;


}

/*For one letter only: A, B, y, n*/