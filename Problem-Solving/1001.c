
#include <stdio.h>

int main() {
    int A, B, X;

    // Read the two integers from standard input
    if (scanf("%d", &A) != 1) return 0;
    if (scanf("%d", &B) != 1) return 0;

    // Calculate the sum
    X = A + B;

    // Print the result followed by a newline character
    printf("X = %d\n", X);

    return 0;
}