#include <stdio.h>

int main() {

    int n, m = 0;
    scanf("%d\n%d", &m, &n);

    int sum = 0;
    int min = -1;
    int is_prime = 1;

    // 소수 판별
    for (int i = m ; i < n + 1 ; i++) {

        if (i == 1)  is_prime = 0;
            
        else if (i > 1) {
            for (int j = 2 ; j < i ; j++) {
                if ( i % j == 0 ) {
                    is_prime = 0;
                    break;
                }
            }
        }

        if (is_prime) {
            sum += i;
            if (min == -1)  min = i;
        }
        else  is_prime = 1;
        
    }

    if (sum)  printf("%d\n%d", sum, min);
    else printf("%d", min);
    
    return 0;
}