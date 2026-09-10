#include <stdio.h>
int main(){
    long long x;
    scanf("%lld", &x);
    long long sn = ((x) * (1 +x))/2 ;
    printf("%lld", sn);
}
