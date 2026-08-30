#include <stdio.h>
#include <string.h>

int main() {
    char color[10];

    printf("colour name (red/yellow/green): ");
    scanf("%s", color);

    // Red?
    if (strcmp(color, "red") == 0) {
        printf("Stop\n");
    } 
    // Yellow?
    else if (strcmp(color, "yellow") == 0) {
        printf("Wait\n");
    } 
    // Green?
    else if (strcmp(color, "green") == 0) {
        printf("Go\n");
    } 
    else {
        printf("worng!\n");
    }

    return 0;
}