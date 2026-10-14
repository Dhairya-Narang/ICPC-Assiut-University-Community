#include <stdio.h>

int solve(int a,int b){
    return a+b;
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int res = solve(a,b);
    printf("%d",res);
}
