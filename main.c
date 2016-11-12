#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    int sum=0;
    
    for(int i=0; i<=1000; i++){
        if(i%3==0)
            sum = sum+i;
        if(i%5==0)
            sum = sum+i;
    }
    
    printf("%d\n",sum);


    return 0;
}
