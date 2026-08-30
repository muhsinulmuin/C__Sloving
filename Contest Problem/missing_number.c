#include<stdio.h>

int main(){


    long long sum;

    long long a,b,c;

    if (scanf("%lld", &sum) == 1){

        scanf("%lld %lld %lld", &a, &b, &c);

        long long missing = sum - (a + b + c);
         printf("%lld\n", missing);
    }

    return 0;
}