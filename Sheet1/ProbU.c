#include <stdio.h>
int main()
{
    float N;
    scanf("%f",&N);
    int x = N;
    float Decimal = N - x;
    if(Decimal==0 ){
        printf("int %d",x);
    }else{
        printf("float %d %.3f",x,Decimal);
    }
}
