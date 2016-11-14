#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//////  scanf("%[^\n]", str); -> \n 즉 엔터를 제외한 모든 문자열을 받는다.
//////  fgets(<#char *restrict#>, sizeof(), stdin)

struct man {
    int age;
    int a[10];
    char gender[10];
    int *p;
};

void set_human(struct man *man,int age, char *gender){
    
    man->age = age;
    strcpy(man->gender,gender);
    
}
void print_info(struct man *man){
    
    printf("%d , %s\n",man->age,man->gender);
    
}
int main(){
    
    struct man man[3];
    char gender[10];
    int age;
    
    for(int i=0; i<3; i++){
        scanf("%d",&age);
        scanf("%s",gender);
        set_human(&man+i,age,gender);
    }
    
    for(int i=0; i<3; i++){
        print_info(&man+i);
    }
    
    return 0;
}