#include <stdio.h>
int main(){
    float x, y ;
    scanf("%f %f", &x ,&y);
    int a = floor(x/y);
    int b = ceil(x/y);
    int c = round(x/y);
    printf("floor %.0f / %.0f = %d\n", x , y , a);
    printf("ceil %.0f / %.0f = %d\n", x , y , b);
    printf("round %.0f / %.0f = %d", x ,y ,c);
}
