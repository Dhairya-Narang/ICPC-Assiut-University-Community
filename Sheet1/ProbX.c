#include <stdio.h>
int main()
{
    long long a , b ,c ,d;
    long long temp;
    long long temp1;
    scanf("%lld %lld %lld %lld",&a, &b ,&c ,&d);
    if (a > c){
        temp = a;
    }
    else {
        temp = c;
    }
    if (b <= d){
        temp1 = b;
    }
    else {
        temp1 = d;
    }
    if (temp <= temp1){
        printf("%lld %lld",temp, temp1);
    }
    else {
        printf("-1");
    }
}
