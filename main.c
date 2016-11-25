#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//////  scanf("%[^\n]", str); -> \n 즉 엔터를 제외한 모든 문자열을 받는다.
//////  fgets(<#char *restrict#>, sizeof(), stdin)
int push(int *arr,int *Front, int *Back, int x){
    
    if(arr[*Front] == 0)
    {
        arr[(*Front)] = x;
        return 0;
    }
    
    *Back = *Back+1;
    arr[*Back]=x;

    return 0;
}
int pop(int *arr,int *Front, int *Back){
    
    if(*Front == *Back)
    {
        if(arr[*Front]!=0)
        {
            printf("%d\n",arr[*Front]);
            arr[*Front]='\0';
            return 0;
        }
        
        printf("-1\n");
        return 0;
    }
    
    printf("%d\n",arr[*Front]);
    
    arr[*Front]='\0';
    *Front=*Front+1;
    
    return 0;
}
int size(int *arr,int *Front, int *Back){
    if(*Front == *Back)
    {
        if(arr[*Front]!=0)
        {
            printf("1\n");
            return 0;
        }
        
        printf("0\n");
        return 0;
    }
    printf("%d\n",*Back-*Front+1);
    return 0;
}
int empty(int *arr, int *Front,int *Back){
    
    if(*Front == *Back)
    {
        if(arr[*Front]!=0)
        {
            printf("0\n");
            return 0;
        }
        
        printf("1\n");
        return 0;
    }
        printf("0\n");
        return 0;
}
int front(int *arr,int *Front, int *Back){
    if(*Front == *Back)
    {
        if(arr[*Front]!=0)
        {
            printf("%d\n",arr[*Front]);
            return 0;
        }
        
        printf("-1\n");
        return 0;
    }
    
    printf("%d\n",arr[*Front]);
    
    return 0;
}
int back(int *arr,int *Front, int *Back){
    if(*Front == *Back)
    {
        if(arr[*Back]!=0)
        {
            printf("%d\n",arr[*Back]);
            return 0;
        }
        
        printf("-1\n");
        return 0;
    }
    
    printf("%d\n",arr[*Back]);
    return 0;
}
int main(){
    
    int n,x;
    int arr[10000];
    char msg[10];
    int arrFront=0,arrBack=0;
    
    scanf("%d",&n);
    
    for(int i=0; i<n; i++){
        scanf("%s",msg);
        
        switch (msg[0]) {
            case 'p':
                
                if(msg[1]=='u'){
                    scanf("%d",&x);
                    push(arr,&arrFront,&arrBack,x);
                }
                else
                    pop(arr,&arrFront,&arrBack);
                break;
                
            case 's':
                size(arr,&arrFront,&arrBack);
                break;
                
            case 'e':
                empty(arr,&arrFront,&arrBack);
                break;
                
            case 'f':
                front(arr,&arrFront,&arrBack);
                break;
                
            case 'b':
                back(arr,&arrFront,&arrBack);
                break;
                
            default:
                break;
        }
    }
    
    return 0;
}