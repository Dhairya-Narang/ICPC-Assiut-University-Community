#include <stdio.h>

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    long long x;
    long long row;
    scanf("%lld",&x);
    long long col=x/4;
    if(col%2==0){
        row=x%4;
    }else{
        row=3-x%4;
    }
    printf("%lld %lld\n",col,row);


    return 0;
}
