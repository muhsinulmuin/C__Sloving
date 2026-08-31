#include<stdio.h>

int main(){
    float price;

    printf("Enter price: ");
    scanf("%f", &price);

    printf("Price = %.2f\n", price);
    return 0; 


}

/*Key details
▶ float stores decimal values.
▶ scanf("%f", &price) reads
decimal input.
▶ %.2f prints 2 digits after
decimal.*/