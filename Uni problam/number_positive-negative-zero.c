/*Write a C program to check if a user-inputted number 
is positive, negative, or zero*/

#include<stdio.h>

int main(){
    int num;

    printf("Enter a number:  ");
    scanf("%d", &num);

    if (num > 0){
        printf("The number is Positive\n");

    }
    else if(num < 0){
        printf("The number is negetive\n");
    }
    else{
        printf("The number is zero.\n");
    }
}

