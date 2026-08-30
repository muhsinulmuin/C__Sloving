#include<stdio.h>

int main(){
    int taka, NUMBER;
    float hour, SALARY;

    scanf("%d %d %f", &NUMBER, &taka, &hour);

    SALARY = taka * hour;

    printf("NUMBER = %d\n", NUMBER);
    printf("SALARY = U$ %.2f\n", SALARY);

    return 0;



}