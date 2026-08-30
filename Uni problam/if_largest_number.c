/*Write a C program that uses 
nestedat if stements to identify and 
print the largest of three given numbers.*/
#include<stdio.h>

int main(){

    float a, b, c;
    printf("Enter Three Number: ");
    scanf("%f %f %f", &a, &b, &c);

    // nested if logic 

    if (a >= b){
        if (a >= c){
            printf("largest number is: %.02f\n", a);
        }
        else{
            printf("Largest number is: %.02f\n", c);
        }
    }

    else{
        if (b >= c){
            printf("Largest number is: %.02f\n", b);
        }
           
        else{
            printf("Largest number is: %.02f\n", c);
        }
    }

     
     return 0;
}