#include <stdio.h>

int main() {
    
    int times, x, y;
    int sum = 0;
    int arr[101][101] = {0};
    
    scanf("%d", &times);

    for (int i = 0 ; i < times ; i++){
        scanf("%d %d", &x, &y);
        
        for (int j = 0 ; j < 10 ; j++){
            
            for (int k = 0 ; k < 10 ; k++){
                arr[j+x][k+y] = 1;
            }
            
        }
    }

    for (int r = 0; r < 100 ; r++){
        for (int c = 0; c < 100 ; c++){
            sum += arr[r][c];
        }
    }
    
    printf("%d", sum);
    
    return 0;
}