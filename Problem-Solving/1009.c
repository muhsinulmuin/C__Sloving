#include <stdio.h>
 
int main() {
    char name[100];
    double a, b, TOTAL;
    
    scanf("%s %lf %lf", name, &a, &b);

    TOTAL = a + (b * 0.15);

    printf("TOTAL = R$ %.2lf\n", TOTAL);
 
    
 
    return 0;
}

