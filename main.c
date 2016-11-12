#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    int a,b,c;
    int count=0;
    
    for(a=2; a<2000; a++){
        for(b=1; b<2000; b++){
            
            if(b>=a)
                break;
            for(c=0; c<2000; c++){
                if(c>=b)
                    break;
                
                if(a+b+c==2000)
                    printf("%d, %d, %d\n",a,b,c);
                count=count+1;
            }
        }
    }

    printf("%d\n",count);
    
    return 0;
}
