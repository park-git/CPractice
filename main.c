#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare(char str1[], char str2[]);
int a(char *s1, char *s2);
int main(){
    
    int flag;
    char str1[100];
    char str2[100];
    
    while(1){
        scanf("%s",str1);
        scanf("%s",str2);
        
        flag=compare(str1,str2);
        
        if(flag==-1)
            printf("There is no same word, %d\n",flag);
        else
            printf("%d\n",flag);
    }
    return 0;
}

int compare(char str1[], char str2[]){
    
    int countstr2=0;
    int count=1;
    
    for(int i=0; i<100; i++){
        if(str1[i]=='_'){
            count++;
        }
        
        if(str1[i]==str2[countstr2]){
            if(a(&str1[i],&str2[countstr2]))
                return count;
        }
    }
    
    return -1;
}

int a(char *s1, char *s2){
    
    while(*s2){
        if(*s2 != *s1)
            return 0;
        s1++;
        s2++;
    }
    
    if(*s1=='_'|| *s1=='\0')
        return 1;
    
    return 0;
}
