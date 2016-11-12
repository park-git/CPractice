#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int recurrence_function(int num);

int main(){
    
    int n,result;
    
    scanf("%d",&n);
    
    result=recurrence_function(n);
    
    printf("%d\n",result);
    
    return 0;
}
int recurrence_function(int num){
    
    printf("parameter = %d\n",num);
    
    if(num==1){
        printf("return = %d\n",num);
        return 1;
    }
    else{
        return num * recurrence_function(num-1);
    }
    
}
