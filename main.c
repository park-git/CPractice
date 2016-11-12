#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//////  scanf("%[^\n]", str); -> \n 즉 엔터를 제외한 모든 문자열을 받는다.
//////  fgets(<#char *restrict#>, sizeof(), stdin)

void add_book(char (*book)[30],char (*author)[30],char (*publisher)[30],int *index);
int search_book(char (*book)[30],char (*author)[30],char (*publisher)[30],int *borrow);
int compare(char (*book)[],char *user_input);
int borrow_book(char (*book)[],int *borrow);
int return_book(char (*book)[],int *borrow);

int main(){
    
    int flag;
    char book_name[100][30];
    char author[100][30];
    char publisher[100][30];
    int borrow[100]={0};
    int index=0;
    
    while(1){
        printf("1 : 책 추가\n");
        printf("2 : 책 찾기\n");
        printf("3 : 책 빌리기\n");
        printf("4 : 책 반납하기\n");
        printf("5 : 끝내기\n");
        
        scanf("%d",&flag);
        
        switch (flag) {
            case 1:
                add_book(book_name,author,publisher,&index);
                index++;
                break;
            case 2:
                search_book(book_name, author, publisher,borrow);
                break;
            case 3:
                borrow_book(book_name,borrow);
                break;
            case 4:
                return_book(book_name, borrow);
                break;
            case 5:
                return 0;
            default:
                break;
        }
        
        printf("\n");
        printf("\n");
    }
    
    return 0;
}

void add_book(char (*book)[30],char (*author)[30],char (*publisher)[30],int *index){
    
    printf("*** 책 등록 ***\n");
    printf("제목 : ");
    scanf("%s",(book)[*index]);
    printf("작가 : ");
    scanf("%s",(author)[*index]);
    printf("출판사 : ");
    scanf("%s",(publisher)[*index]);
    
    printf("book name : %s, author name : %s, publisher name : %s, index : %d\n",(book)[*index],(book)[*index],(book)[*index],*index);
}
int search_book(char (*book)[30],char (*author)[30],char (*publisher)[30],int *borrow){
    
    char user_input[30];
    
    int flag;
    printf("*** 책 찾기 ***\n");
    printf("1 : 제목으로 찾기\n");
    printf("2 : 작가 이름으로 책 찾기\n");
    printf("3 : 출판사명으로 책 찾기\n");
    printf("4 : 메뉴\n");
    
    scanf("%d",&flag);
    
    switch(flag){
        case 1:
            printf("제목 입력 : ");
            scanf("%s",user_input);
            for(int i=0; i<100; i++){
                if(book[i][0]==user_input[0]){
                    if(compare(book+(i*30),user_input)){
                        if(borrow[i]==0)
                            printf("제목 : %s, 저자 : %s, 출판사 : %s, 대여가능\n",&book[i][0],&author[i][0],&publisher[i][0]);
                        else
                            printf("제목 : %s, 저자 : %s, 출판사 : %s, 대여 불 가능\n",&book[i][0],&author[i][0],&publisher[i][0]);
                        return 0;
                    }
                }
                
            }
            printf("찾는 책이 없습니다.\n");
            return 0;
            break;
            
        case 2:
            printf("저자 입력 : ");
            scanf("%s",user_input);
            for(int i=0; i<100; i++){
                if(author[i][0]==user_input[0]){
                    if(compare(author+(i*30),user_input)){
                        if(borrow[i]==0)
                            printf("제목 : %s, 저자 : %s, 출판사 : %s, 대여가능\n",&book[i][0],&author[i][0],&publisher[i][0]);
                        else
                            printf("제목 : %s, 저자 : %s, 출판사 : %s, 대여 불 가능\n",&book[i][0],&author[i][0],&publisher[i][0]);
                        return 0;
                    }
                }
                
            }
            printf("찾는 책이 없습니다.\n");
            return 0;
            break;
            
        case 3:
            printf("출판사 입력 : ");
            scanf("%s",user_input);
            for(int i=0; i<100; i++){
                if(publisher[i][0]==user_input[0]){
                    if(compare(publisher+(i*30),user_input)){
                        if(borrow[i]==0)
                            printf("제목 : %s, 저자 : %s, 출판사 : %s, 대여가능\n",&book[i][0],&author[i][0],&publisher[i][0]);
                        else
                            printf("제목 : %s, 저자 : %s, 출판사 : %s, 대여 불 가능\n",&book[i][0],&author[i][0],&publisher[i][0]);
                        return 0;
                    }
                }
                
            }
            printf("찾는 책이 없습니다.\n");
            return 0;
            break;
        case 4:
            return 0;
            break;
    }
    return 0;
}
int compare(char (*book)[],char *user_input){
    
    int i=0;
    while((*book)[i]){
        if(*user_input != (*book)[i])
            return 0;
        user_input++;
        i++;
    }
    
    if((*book)[i]==0)
        return 1;
    
    return 0;
}
int borrow_book(char (*book)[30],int *borrow){
    
    char user_input[30];
    
    printf("대여할 책의 제목을 입력하세요 : ");
    scanf("%s",user_input);
    
    for(int i=0; i<100; i++){
        if(book[i][0]==user_input[0]){
            if(compare(book+(i*30),user_input)){
                if(borrow[i]==0){
                    borrow[i]=1;
                    printf("%s를(을) 대여했습니다.",&book[i][0]);
                    return 0;
                }
                else{
                    printf("%s를(을) 대여할 수 없습니다.",&book[i][0]);
                    return 0;
                }
            }
        }
        
    }
    printf("찾는 책이 없습니다.\n");
    return 0;
}
int return_book(char (*book)[30],int *borrow){
    
    char user_input[30];
    
    printf("반납할 책의 제목을 입력하세요 : ");
    scanf("%s",user_input);
    
    for(int i=0; i<100; i++){
        if(book[i][0]==user_input[0]){
            if(compare(book+(i*30),user_input)){
                if(borrow[i]==1){
                    borrow[i]=0;
                    printf("%s를(을) 반납했습니다.",&book[i][0]);
                    return 0;
                }
                else{
                    printf("%s는(은) 이미 반납되었습니다.",&book[i][0]);
                    return 0;
                }
            }
        }
        
    }
    printf("찾는 책이 없습니다.\n");
    
    return 0;
}
