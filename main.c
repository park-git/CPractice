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
    
    int n,m,sum=0,min=0;
    
    scanf("%d %d",&n,&m);
    
    for(int i=n; i<=m; i++){
        if(isPrime(i)){
            if(sum==0)
                min = i;
            sum = sum+i;
        }
    }
    
    if(sum ==0)
        printf("-1");
    else
        printf("%d\n%d",sum,min);
    
    return 0;
}