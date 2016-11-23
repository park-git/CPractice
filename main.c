#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//////  scanf("%[^\n]", str); -> \n 즉 엔터를 제외한 모든 문자열을 받는다.
//////  fgets(<#char *restrict#>, sizeof(), stdin)

void show_arr(char *s);

int main(){
    
    char s[101];
    char *ps = s;
    
    scanf("%s",s);
    
    show_arr(ps);
    
    return 0;
    
    
}

void show_arr(char *s){
    
    int index=0;
    int arr[26];
    
    for(int i=0; i<26; i++)
        arr[i] = -1;
    
    while(*s){
        if(*s=='a'){
            if(arr[0]==-1)
                arr[0]=index;
        }else if(*s=='b'){
            if(arr[1]==-1)
                arr[1]=index;
        }else if(*s=='c'){
            if(arr[2]==-1)
                arr[2]=index;
        }else if(*s=='d'){
            if(arr[3]==-1)
                arr[3]=index;
        }else if(*s=='e'){
            if(arr[4]==-1)
                arr[4]=index;
        }else if(*s=='f'){
            if(arr[5]==-1)
                arr[5]=index;
        }else if(*s=='g'){
            if(arr[6]==-1)
                arr[6]=index;
        }else if(*s=='h'){
            if(arr[7]==-1)
                arr[7]=index;
        }else if(*s=='i'){
            if(arr[8]==-1)
                arr[8]=index;
        }else if(*s=='j'){
            if(arr[9]==-1)
                arr[9]=index;
        }else if(*s=='k'){
            if(arr[10]==-1)
                arr[10]=index;
        }else if(*s=='l'){
            if(arr[11]==-1)
                arr[11]=index;
        }else if(*s=='m'){
            if(arr[12]==-1)
                arr[12]=index;
        }else if(*s=='n'){
            if(arr[13]==-1)
                arr[13]=index;
        }else if(*s=='o'){
            if(arr[14]==-1)
                arr[14]=index;
        }else if(*s=='p'){
            if(arr[15]==-1)
                arr[15]=index;
        }else if(*s=='q'){
            if(arr[16]==-1)
                arr[16]=index;
        }else if(*s=='r'){
            if(arr[17]==-1)
                arr[17]=index;
        }else if(*s=='s'){
            if(arr[18]==-1)
                arr[18]=index;
        }else if(*s=='t'){
            if(arr[19]==-1)
                arr[19]=index;
        }else if(*s=='u'){
            if(arr[20]==-1)
                arr[20]=index;
        }else if(*s=='v'){
            if(arr[21]==-1)
                arr[21]=index;
        }else if(*s=='w'){
            if(arr[22]==-1)
                arr[22]=index;
        }else if(*s=='x'){
            if(arr[23]==-1)
                arr[23]=index;
        }else if(*s=='y'){
            if(arr[24]==-1)
                arr[24]=index;
        }else if(*s=='z'){
            if(arr[25]==-1)
                arr[25]=index;
        }
        s++;
        index++;
    }
    
    for(int i=0; i<26; i++){
        printf("%d ",arr[i]);
    }
}