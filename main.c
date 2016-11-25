#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//////  scanf("%[^\n]", str); -> \n 즉 엔터를 제외한 모든 문자열을 받는다.
//////  fgets(<#char *restrict#>, sizeof(), stdin)

int isPrime(int num) {
    
    int i = 0;
    
    if (num < 2)
        return 0;
    for (i = 2; i*i <= num; i += 1) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main(){
    
    int n,a,k=0;
    
    scanf("%d",&n);
    
    for(int i=0; i<n; i++){
        scanf("%d",&a);
        if(isPrime(a)){
            k++;
        }
    }
    
    printf("%d",k);
    
    return 0;
}