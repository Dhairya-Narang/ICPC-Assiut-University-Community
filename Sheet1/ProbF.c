#include <stdio.h>
int main(){
    long long x ,y ;
    scanf("%lld %lld", &x , &y);
    long long a = (x % 10);
    long long b = (y % 10);
    int res = (a+b);
    printf("%d", res);
}
