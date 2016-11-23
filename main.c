#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//////  scanf("%[^\n]", str); -> \n 즉 엔터를 제외한 모든 문자열을 받는다.
//////  fgets(<#char *restrict#>, sizeof(), stdin)

int main(){
    
    int n,k=1,i=6,count=1;
    
    scanf("%d",&n);
    
    while(1){
    
        if(n<=k)
            break;
        
        k = k + i;
        i = i+6;
        count ++;
    }
    
    printf("%d",count);
    
    return 0;
}