#include<stdio.h>

int main(){

    float MEDIA, A, B, C;

    scanf("%f %f %f", &A, &B, &C);

    MEDIA = (A * 2 + B * 3 + C * 5) / 10;

    printf("MEDIA = %.1f\n", MEDIA);

    return 0;

}