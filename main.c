#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//////  scanf("%[^\n]", str); -> \n 즉 엔터를 제외한 모든 문자열을 받는다.
//////  fgets(<#char *restrict#>, sizeof(), stdin)

int main(){
    
    int arr[1000];
    int n;
    scanf("%d",&n);
    
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(arr[j]>arr[j+1]){
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
    
    for(int i=0; i<n; i++)
        printf("%d\n",arr[i]);
    
    return 0;
}