#include <stdio.h>
int main(){
    int x , y;
    scanf("%d %d", &x , &y);
    int add = x+y;
    printf("%d + %d = %d\n",x , y , add);
    long long multiply = 1LL *x*y;
    printf("%d * %d = %lld\n",x , y , multiply);
    int sub = x-y;
    printf("%d - %d = %d\n",x , y , sub);
}
