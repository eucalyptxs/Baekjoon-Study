#include <stdio.h>
#include <string.h>

int main(){
    int times, res;
    int ls[26] = {0};
    res = 0;
    scanf("%d", &times);

    for ( int i = 0  ;  i < times  ;  i++ ){
        res += 1;
        char s[101];
        
        memset(ls, 0, sizeof(ls));
        scanf("%s", s);

        for ( int j = 0  ;  j < strlen(s)  ;  j++ ){
            int n = s[j] - 97;

            if ( j == 0 ){
                ls[n] += 1;
            }
                
            else if ( ( s[j-1] != s[j] ) ) {
                if ( ls[n] == 0 ){
                    ls[n] += 1;
                }
                    
                else {
                    res -= 1;
                    break;
                }
            }
        }
    }

    printf("%d", res);
    
    return 0;
}