#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//////  scanf("%[^\n]", str); -> \n 즉 엔터를 제외한 모든 문자열을 받는다.
//////  fgets(<#char *restrict#>, sizeof(), stdin)

struct S{
    int r;
    char text[100];
};

int main(){
    
    int t;
    struct S s[1000];
    
    scanf("%d",&t);
    
    for(int i=0; i<t; i++){
        scanf("%d",&s[i].r);
        scanf("%s",s[i].text);
    }
    
    for(int i=0; i<t; i++){
        
        int k=0;
        
        while(s[i].text[k]){
            
            
            for(int j=0; j<s[i].r; j++){
                
                if(s[i].text[k]=='%')
                    printf("%%");
                else
                    
                    printf("%c",s[i].text[k]);
            }
            
            k++;
        }
        
        printf("\n");
    }
    
    return 0;
}