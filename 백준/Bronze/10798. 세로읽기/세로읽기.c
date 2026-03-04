#include <stdio.h>
#include <string.h>

int main(){

    int max_col = 0;
    char cur[16];
    char input[5][16] = {'0'};

    for (int i = 0 ; i < 5 ; i++) {
        scanf("%s", cur);
        strcpy(input[i], cur);
        if (max_col < strlen(cur)) max_col = strlen(cur);
    }

    for (int j = 0 ; j < max_col ; j++) {
        for (int p = 0 ; p < 5 ; p++){
            if (j < strlen(input[p])) printf("%c", input[p][j]);
        }
    }
    
    return 0;
}