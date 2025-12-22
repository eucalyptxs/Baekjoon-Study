#include <stdio.h>

int main(void){
    int h, m, w;
    int res_h, res_m;
    scanf("%d %d\n%d", &h, &m, &w);

    res_m = (m + w)%60;
    res_h = h + (m + w)/60;
    res_h = (res_h >23)? (res_h - 24):res_h;

    printf("%d %d", res_h, res_m);
    
    return 0;
}