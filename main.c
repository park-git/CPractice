#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void find(int *arr,int count);


int main(){
    
    int n;
    int arr[100];
    int *parr=NULL;
    
    
    scanf("%d",&n);
    
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(arr[j]>arr[j+1]){
                int tmp =  arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
    
    parr = arr;
    
    find(parr,n);
    
    return 0;
}

void find(int *arr, int count){
    
    int remainder,max,min;
    
    for(int i=0; i<count-1; i++){
        if(i==0)
            max=*(arr+i),min=*(arr+i+1);
        else{
            max = arr[i];
            min = remainder;
        }
        while(1){
            remainder = max%min;
            max = min;
            min = remainder;
            
            if(remainder==0){
                remainder = max;
                break;
            }
        }
        
    }
    
    printf("%d",remainder);
    
}
