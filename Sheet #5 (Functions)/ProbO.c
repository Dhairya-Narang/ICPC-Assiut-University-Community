#include <stdio.h>

#include <stdbool.h>

bool PrimeNumber(long long N){
    if (N < 2) return false;
    for(long long i=2;i*i<=N;i++){
        if(N%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
}