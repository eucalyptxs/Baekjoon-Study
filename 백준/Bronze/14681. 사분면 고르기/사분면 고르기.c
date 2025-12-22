#include <stdio.h>

int main(void){
    int x, y, res;
    scanf("%d\n%d", &x, &y);

    res = (x*y >0)? 1:2;
    res = (y > 0)? res:res+2;

    printf("%d", res);
    
    return 0;
}