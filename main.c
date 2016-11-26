#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//////  scanf("%[^\n]", str); -> \n 즉 엔터를 제외한 모든 문자열을 받는다.
//////  fgets(<#char *restrict#>, sizeof(), stdin)
int arr[1001][1001];
int check[1001]={0};
int queue[1001];
int n,m,v,x,y,f=0,r=0;

void dfs(int v){
    check[v] = 1;
    printf("%d ",v);
    for(int i=1; i<=n; i++){
        if(arr[v][i]==1 && !check[i]){
            dfs(i);
        }
    }

}
void
bfs(int v){
    check[v]=1;
    queue[r++]=v;
    
    while(f<r){
        v = queue[f++];
        printf("%d ",v);
        for(int i=1; i<=n; i++){
            if(arr[v][i]==1 &&  !check[i]){
                check[i] = 1;
                queue[r++]=i;
            }
        }
    }
}

int main(){
    
    
    
    scanf("%d %d %d",&n,&m,&v);
    
    for(int i=0; i<m; i++){
        scanf("%d %d",&x,&y);
        arr[x][y] = arr[y][x]=1;
    }
    
    for(int i=1; i<m-1; i++){
        for(int j=1; j<m-1; j++){
            
        }
    }
    
    dfs(v);
    printf("\n");
    for(int i=0; i<1000; i++)
        check[i] = 0;
    
    bfs(v);
    
    return 0;
}