#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//////  scanf("%[^\n]", str); -> \n 즉 엔터를 제외한 모든 문자열을 받는다.
//////  fgets(<#char *restrict#>, sizeof(), stdin)

int x,n=1,i=1;

int main(){
    
    scanf("%d",&x);
    
    while(1){
        if(x<=n)
            break;
        
        i++;
        n = (i*(i+1))/2;
    }
    
    int k = n-x;
    
    if(i%2!=0){
        printf("%d/%d",k+1,i-k);
    }
    else{
        printf("%d/%d",i-k,k+1);
    }
    
    return 0;
}