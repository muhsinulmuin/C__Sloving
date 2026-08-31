/*
task-2
area of a rectangle
*/

#include<stdio.h>

int main(){

    int length, width, area;

    printf("Enter LEngth: ");
    scanf("%d", &length);

    printf("Enter Width: ");
    scanf("%d", &width);

    area = length * width;

    printf("Area = %d\n", area);

    return 0;

}