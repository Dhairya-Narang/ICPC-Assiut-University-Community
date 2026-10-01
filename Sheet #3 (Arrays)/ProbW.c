#include <stdio.h>

 
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
 
    int N,M;
    scanf("%d %d",&N,&M);
    int Array[N][M];

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            scanf("%d",&Array[i][j]);
        }
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<M/2;j++){
            int temp = Array[i][j];
            Array[i][j] = Array[i][-j+M-1];
            Array[i][-j+M-1] = temp;
            
        }
        
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            printf("%d ",Array[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}