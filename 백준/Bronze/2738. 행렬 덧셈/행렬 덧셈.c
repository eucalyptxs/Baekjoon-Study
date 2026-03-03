#include <stdio.h>

int main(){
    int n, m, e = 0;
    int sum[100001] = {0};
    scanf("%d %d", &n, &m);


    for (int j = 0 ; j < n ; j++){
            for (int k = 0 ; k < m ; k++){
                scanf("%d", &e);
                sum[k + j*m] += e;
            }
    }
    
    for (int i = 0 ; i < n ; i++){
            for (int q = 0 ; q < m ; q++){
                scanf("%d", &e);
                printf("%d ", sum[q + i*m] + e);
            }
        printf("\n");
    }

    return 0;
}