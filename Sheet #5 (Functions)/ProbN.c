#include <stdio.h>

void ShiftZeros(int arr[],int N){
    int count=0;
    for(int i=0;i<N;i++){
        if(arr[i]!=0){
            arr[count++] = arr[i];
        }
    }
    while(count<N){
        arr[count++] = 0;
    }
}


int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    ShiftZeros(arr,N);
    for(int i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}