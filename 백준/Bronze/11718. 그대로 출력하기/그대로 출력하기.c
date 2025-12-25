#include <stdio.h>

int main(void){
    char n[100];

    while (fgets(n, sizeof(n), stdin) != NULL){
        printf("%s", n);
    }

    return 0;
}