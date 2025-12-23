#include <stdio.h>

int main(void){
    int n, a, min, max;
    
    scanf("%d", &n);
    scanf("%d", &a);
    min = a;
    max = a;

    for (int i = 1; i < n; i++){
        scanf("%d", &a);
        min = (min < a)? min:a;
        max = (max > a)? max:a;
    }

    printf("%d %d", min, max);
    
    return 0;
}