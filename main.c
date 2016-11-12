#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    int n;
    
    int K,start=2;
    while(1)
    {
        scanf("%d",&n);
        K=n;
        start=2;
        while(start<=K)
        {
            if(!(K%start))
            {
                printf("%d ",start);
                K/=start;
            }
            else
                start++;
            
        }
        
        printf("\n");
    }

    
    return 0;
}
