#include <stdio.h>
#include <stdbool.h>



 
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
 
    int N,M;
    scanf("%d %d",&N,&M);
    char array[N][M];

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            scanf(" %c",&array[i][j]);
        }
    }


    int X,Y;
    scanf("%d %d",&X,&Y);


    for(int x=X-2;x<X+1;x++){
        for(int y=Y-2;y<Y+1;y++){
            if(x==X-1 && y==Y-1){
                continue;
            }else{
                if(array[x][y]=='.'){
                    printf("no");
                    return 0;
                }
            }
        }
    }

    printf("yes");



    return 0;
}