#include <stdio.h>

int main()
{
    int day, month, year;

    printf("Enter Day Month Year: ");
    scanf("%d %d %d", &day, &month, &year);

    printf("%02d-%02d-%04d\n", day, month, year);

    return 0;
}