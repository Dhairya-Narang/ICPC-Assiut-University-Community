#include <stdio.h>

int Distinct_Numbers(int arr[],int N){
    int count=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                count--;
            }
        }
        count++;
    }
    return count;
}

int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",Distinct_Numbers(arr,N));
    return 0;
}