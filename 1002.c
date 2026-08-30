#include <stdio.h>
 
int main() {
 
    float R, A;
    
    printf("Enter R: ");
    scanf("%f",&R);
    
    A = 3.14 * R * R;
    
    printf("A = %.2f", A);
 
    return 0;
}