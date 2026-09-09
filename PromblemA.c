#include <stdio.h>
int main(){
    float X ,P;
    scanf("%f %f",&X,&P);
    float amount = (P*100)/(100-X);
    printf("%.2f",amount);
    
}
