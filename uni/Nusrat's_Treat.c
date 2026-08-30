#include <stdio.h>

int main() {

    int N;

    if (scanf("%d", &N) == 1) {

        int chocolates = (N * (N + 1)) / 2;
        
        printf("%d\n", chocolates);
    }
    return 0;
}