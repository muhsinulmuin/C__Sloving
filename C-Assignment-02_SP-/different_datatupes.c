#include<stdio.h>

int main(){

    int id;
    float cgpa;
    char section;

    printf("Enter id, cgpa, section: ");
    scanf("%d %f %c", &id, &cgpa, &section);

    printf("ID: %d\n", id);
    printf("CGPA: %.2f\n", cgpa);
    printf("Section: %c\n", section);
    return 0;

}

/*Sampleinput
1013.75A*/