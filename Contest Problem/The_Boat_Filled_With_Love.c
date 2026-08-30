#include <stdio.h>
#include <string.h>

int main() {
    long long N;

    if (scanf("%lld", &N) == 1) {

        char banner[100];

        // N full sentance 
        sprintf(banner, "We Love You. We %lld Are Here For You.", N);

        int len = strlen(banner);

        
        for (int i = 0; i < N && i < len; i++) {
            putchar(banner[i]);
        }
        printf("\n");
    }
    return 0;
}