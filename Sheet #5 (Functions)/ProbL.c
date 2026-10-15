#include <stdio.h>

void combined(int arr1[],int arr2[],int N){
    int arr3[2*N];
    for(int i=0;i<N;i++){
        arr3[i] = arr1[i];
    }
    for(int i=0;i<N;i++){
        arr3[N+i] = arr2[i];
    }
    for(int i=0;i<N*2;i++){
        printf("%d ",arr3[i]);
    }
}


int main(){
    int N;
    scanf("%d",&N);
    int arr1[N],arr2[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<N;i++){
        scanf("%d",&arr2[i]);
    }
    combined(arr1,arr2,N);
}