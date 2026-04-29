#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {
    
    long long N = n;
    int len_n = 0;
    if (n == 0)  len_n = 0;
    else{
        while (N > 0) {
            N /= 10;
            len_n++;
        } 
    }
    
    // 리턴할 값은 메모리를 동적 할당해주세요.
    int* answer = (int*)malloc(sizeof(int)*len_n);
    
    int i = 0;
    while (i < len_n) {
        answer[i] = n % 10;
        n /= 10;
        i++;
    }
    
    return answer;
}