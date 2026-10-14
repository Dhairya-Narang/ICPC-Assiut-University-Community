#include <stdio.h>

void Shif(int arr[], int a){
    int temp = arr[a-1];
    for (int i = a - 1; i > 0; i--){
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}

int main(){
    int N,X;
    scanf("%d %d",&N,&X);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<X;i++){
        Shif(arr,N);
    }
    for(int i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
    return 0;

}