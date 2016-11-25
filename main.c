#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//////  scanf("%[^\n]", str); -> \n 즉 엔터를 제외한 모든 문자열을 받는다.
//////  fgets(<#char *restrict#>, sizeof(), stdin)

int arr[100000];
int indexArr=-1;

void push(int x){
    indexArr++;
    arr[indexArr]=x;
}
int pop(){
    if(indexArr==-1){
        printf("-1\n");
        return 0;
    }
    
    printf("%d\n",arr[indexArr]);
    arr[indexArr]='\0';
    indexArr--;
    
    return 0;
}
int size(){
    
    printf("%d\n",indexArr+1);
    
    return 0;
}
int empty(){
    
    if(indexArr==-1){
        printf("1\n");
        return 0;
    }
    else{
        printf("0\n");
        return 0;
    }
}
int top(){
    
    if(indexArr==-1){
        printf("-1\n");
        return 0;
    }
    
    printf("%d\n",arr[indexArr]);
    
    return 0;
}


int main(){
    
    int n,x;
    char functionNmae[10];
    scanf("%d",&n);
    
    for(int i=0; i<n; i++){
        scanf("%s",functionNmae);
        
        if(strcmp(functionNmae, "push")==0)
        {
            scanf("%d",&x);
            push(x);
        }
        
        else if(strcmp(functionNmae, "pop")==0)
        {
            pop();
        }
        
        else if(strcmp(functionNmae, "size")==0)
        {
            size();
        }
        
        else if(strcmp(functionNmae, "empty")==0)
        {
            empty();
        }
        
        else if(strcmp(functionNmae, "top")==0)
        {
            top();
        }
    }
    
    return 0;
}