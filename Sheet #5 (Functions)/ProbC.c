#include <stdio.h>
#include <stdbool.h>

bool odd(long long N){
    bool f=false;
    if(N%2!=0){
        f=true;
    }
    return f;
}

bool binary(long long N){
    if(N==0) return false;
    bool f=true;
    int S[32];
    int i=0;
    for(;N>0;){
        S[i++] = N%2;
        N/=2;
    }
    for(int z=0;z<i/2;z++){
        if(S[z]!=S[i-z-1]){
            f=false;
            break;
        }
    }
    return f;

}

int main(){
    long long N;
    scanf("%lld",&N);
    bool z=odd(N);
    bool b = binary(N);
    if(z==true && b==true){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;

}