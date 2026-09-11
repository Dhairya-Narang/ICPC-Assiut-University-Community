#include <stdio.h>
int main(){
    long long a;
    long long b;
    long long c;
    long long x;
    
    scanf("%lld %lld %lld",&a,&b,&c);
    x = ((a*b)/c);
    if((a*b)%c > 0){
        printf("double");
    }else if(x <= 2147483647 && x >= (-2147483648 )){
        printf("int");
    }else {
        printf("long long");
    }
 
}
