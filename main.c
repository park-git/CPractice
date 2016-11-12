#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    int n1=1;
    int n2=1;
    int n3;
    
    int sum=1;
    
    for(int i=3; i<=1000000; i++){
        
        n3 = n1 + n2;
        
        n1 = n2;
        n2 = n3;
        
        if(i%2==0)
            sum = n3 + sum;
    }
    
    printf("%d\n",sum);


    return 0;
}
