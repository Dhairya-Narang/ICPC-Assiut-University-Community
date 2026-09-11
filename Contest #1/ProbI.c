#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int y = x/10;
    int z = x%10;
    if(z==0 || y%z==0 || z%y==0){
        printf("YES");
    }else{printf("NO");}
}
