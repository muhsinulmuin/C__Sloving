#include <stdio.h>

int main() {
    long long N;
    
    while (scanf("%lld", &N) == 1) {

        long long M = N * (N + 1) * (2 * N + 1) / 6;

        printf("%lld\n", M);
        
    }
    return 0;
}