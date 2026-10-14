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
    int T;
    scanf("%d",&T);
    while (T>0){
        long long N;
        scanf("%lld",&N);
        bool z = PrimeNumber(N);
        if(z==true){printf("YES\n");}
        else{printf("NO\n");}
        T--;
    }
    return 0;
}