/*task-1 
Blood Group, Admission Year, Student ID
*/


#include<stdio.h>

int main(){

    char blood_group[5];
    int admission_year;
    char student_id[20];

    printf("Enter Blood Group: ");
    scanf("%s", &blood_group);


    printf("Enter Admission Year: ");
    scanf("%d", &admission_year);

    printf("Enter Student ID: ");
    scanf("%s", &student_id);


    printf("Blood Group: %s\n", blood_group);
    printf("Admission Year: %d\n", admission_year);
    printf("Student ID: %s\n", student_id);

    return 0;
}