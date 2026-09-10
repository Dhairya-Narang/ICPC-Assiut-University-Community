#include <stdio.h>
int main()
{
    int x;
    long long y;
    char z;
    float a;
    double b;
    scanf("%d %lld %c %f %lf", &x ,&y ,&z ,&a ,&b);
    printf("%d\n%lld\n%c\n%.2f\n%.1f",x ,y , z ,a ,b);
} 
