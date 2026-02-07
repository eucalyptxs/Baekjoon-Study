#include <stdio.h>
#include <string.h>

int main(void){

    char s[101];
    int s_length, res;
    
    scanf("%s", &s[0]);
    s_length = strlen(s);
    
    for (int i = 0 ; i < s_length/2 ; i++){
        if (s[i] == s[s_length - i-1]){
            res = 1;
        }

        else {
            res = 0;
            break;
        }
    }

    printf("%d", res);

    return 0;
}