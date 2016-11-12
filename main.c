#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    int n;
    int i,j;
    scanf("%d",&n);
    
    for(i=n; i>0; i--){
        for(j=0; j<n-i; j++){
            printf(" ");
        }
        for(j=i*2-1; j>0; j--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
