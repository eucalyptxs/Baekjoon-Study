#include <stdio.h>

int main() {

    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);

    int a, b, c, d;
    a = x;
    b = y;
    c = w - x;
    d = h - y;

    int min;
    min = (a < c)? a:c;
    min = (min < b)? min:b;
    min = (min < d)? min:d;

    printf("%d", min);
    
    return 0;
}