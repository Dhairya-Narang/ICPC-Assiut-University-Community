#include <stdio.h>

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int N,X,Y;
    scanf("%d %d %d",&N,&X,&Y);
    int arr[N][N];
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int j=0;j<N;j++){
        swap(&arr[X-1][j],&arr[Y-1][j]);    
    }
    for(int j=0;j<N;j++){
        swap(&arr[j][X-1],&arr[j][Y-1]);    
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;

}