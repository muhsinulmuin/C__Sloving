/*
Mental model
%d %d means C expects two
integers.
*/

#include<stdio.h>

int main(){

    int a, b, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;

    printf("Sum = %d\n", sum);
    return 0;;
}