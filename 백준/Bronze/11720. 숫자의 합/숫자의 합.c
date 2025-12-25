#include <stdio.h>

int main(void){
    int t, res;
    char n[100];
    res = 0;

    scanf("%d", &t);
    scanf("%s", n);

    for (int i = 0; i < t; i++){
        res += n[i] - '0';
    }

    printf("%d", res);

    return 0;
}