#include <stdio.h>
#include <math.h>

int Equation(int a,int b){
    int sum=0;
    for(int i=2;i<=b;i+=2){
        sum += pow(a,i);
    }
    return sum;
}

int main(){
    int X,N;
    scanf("%d %d",&X,&N);
    printf("%d",Equation(X,N));
}