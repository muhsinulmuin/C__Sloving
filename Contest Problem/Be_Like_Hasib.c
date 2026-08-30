#include <stdio.h>

int main() {
    long long N, X;

    if (scanf("%lld %lld", &N, &X) == 2) {

        long long low = 1, high = N;
        
        int questions = 0;

        while (low < high) {

            long long mid = (low + high) / 2;
            questions++;
            
           
            if (X > mid) {
                
                low = mid + 1; // Ans: Yes
            } 
            else {
                
                high = mid;    // An: No
            }
        }

        printf("%d\n", questions);
    }
    return 0;
}