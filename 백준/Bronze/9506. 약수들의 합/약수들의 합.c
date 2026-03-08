#include <stdio.h>

int main(void) {

    int n   = 0;    
    int sum = 1;
    int factor[100001] = {0};
    
    scanf("%d", &n);

    while (n+1) {
        
        for (int i = 2 ; i < n ; i++) {
            if (n % i == 0) {
                sum += i;
                factor[i] = 1;
            }
        }
    
        if (sum == n) {
            printf("%d = 1", n);

            for (int j = 2 ; j < n+1 ; j++) {
                if (factor[j] == 1) {
                    printf(" + %d", j);
                }
            }
            printf("\n");
        }
        else  printf("%d is NOT perfect.\n", n);

        scanf("%d", &n);
        sum = 1;
        for (int k = 0 ; k < n ; k++) {
            factor[k] = 0;
        }
    }

    return 0;
}