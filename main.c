#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int NtoDec(int n,int num, int *arr);
void DectoM(int m, int sum);

int main(){
    
    int n,m,num,sum;
    int arr[8];
    
    scanf("%d %d",&n,&m);
    scanf("%d",&num);
    
    sum = NtoDec(n, num, arr);
    DectoM(m, sum);
    
    return 0;
}

int NtoDec(int n,int num, int *arr){
    
    int divide = 10,time=n;
    int sum=0;
    
    for(int i=7; i>=0; i--){
        
        arr[i] = num%divide;
        num = num - arr[i];
        
        if(i!=7){
            arr[i] = (arr[i]/(divide/10))*n;
            n = n * time;
        }
        divide = divide*10;
        sum = sum + arr[i];
        
        if(num==0)
            break;
    }
    return sum;
}

void DectoM(int m, int sum){
    
    int brr[8]={0};
    
    for(int i=7; i>=0; i--){
        brr[i] = sum%m;
        sum = sum/m;
        
        if(sum<m){
            brr[i-1] = sum;
            break;
        }
    }
    
    for(int i=0; i<8; i++)
        printf("%d",brr[i]);
    printf("(%d)\n",m);
}

