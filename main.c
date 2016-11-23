#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//////  scanf("%[^\n]", str); -> \n 즉 엔터를 제외한 모든 문자열을 받는다.
//////  fgets(<#char *restrict#>, sizeof(), stdin)

int main(){
    
    char n;
    
    scanf("%c",&n);
    
    printf("%d",n);
    
    return 0;

    
}