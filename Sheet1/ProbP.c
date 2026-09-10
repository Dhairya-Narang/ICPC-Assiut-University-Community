#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    int num = a / 1000;
    if (num % 2 == 0){
        printf("EVEN");
    }
    else if (num % 2 !=0){
        printf("ODD");
    }
}
