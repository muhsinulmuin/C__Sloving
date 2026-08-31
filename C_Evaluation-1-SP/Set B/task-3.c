/*
task-3
hour, minute, second in one scanf, printed as HH:MM:SS

*/

#include<stdio.h>

int main(){

    int hour, minute, second;

    printf("Enter Hour:Minute:Second (HH:MM:SS): ");
    scanf("%d:%d:%d", &hour, &minute, &second);

    printf("HH:MM:SS= %d:%d:%d\n", hour, minute, second);

    return 0;
}