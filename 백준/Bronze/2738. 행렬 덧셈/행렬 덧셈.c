#include <stdio.h>

int main(){
    int n, m = 0;
    int e = 0;
    int sum[100000] = {0};
    scanf("%d %d", &n, &m);

    for (int i = 0 ; i < 2 ; i++){
        for (int j = 0 ; j < n ; j++){
            for (int k = 0 ; k < m ; k++){
                scanf("%d", &e);
                sum[k + j*m] += e;
            }
        }
    }

    for (int l = 0 ; l < n ; l++){
        for (int o = 0 ; o < m ; o++){
            printf("%d ", sum[o + m*l]);
        }
        printf("\n");
    }

    return 0;
}