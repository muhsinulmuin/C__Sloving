#include<stdio.h>

int main(){

    int roll;
    float marks;
    char grade;

    printf("Enter roll: ");
    scanf("%d", &roll);

    printf("Enter marks: ");
    scanf("%f", &marks);

    printf("Enter grade: ");
    scanf("%c", &grade);

    printf("Roll : %d\n", roll);
    printf("Marks: %.2f\n", marks);
    printf("Grade: %c\n", grade);

    return 0;
}