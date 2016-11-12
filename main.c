#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    int n=0;
    int mul=1;
    
    scanf("%d",&n);
    
    for(int i=1; i<n; i++){
        mul = (mul*i)+mul;
    }
    
    printf("%d",mul);


    return 0;
}
