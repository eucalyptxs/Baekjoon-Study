#include <stdio.h>

int main() {
    int cur = 0;
    int max = -1;
    int row = 0;
    int col = 0;

    for (int r = 0 ; r < 9 ; r++){
        for (int c = 0 ; c < 9 ; c++){
            scanf("%d", &cur);
            if (max < cur) {
                max = cur;
                row = r;
                col = c;
            }
        }
    }

    printf("%d\n%d %d", max, row+1, col+1);
}