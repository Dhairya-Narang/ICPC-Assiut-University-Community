#include <stdio.h>
int main()
{
    int x, y ,z;
    int temp;
    scanf("%d %d %d" ,&x ,&y,&z);
    int a=x, b=y,c=z;
    if (x > y ){
        temp = x;
        x = y;
        y = temp;
    }
    if (x > z){
        temp = x;
        x = z;
        z = temp;
    }
    if (y > z){
        temp = y;
        y = z;
        z = temp;
    }
    printf("%d\n%d\n%d\n\n%d\n%d\n%d",x ,y, z ,a ,b ,c);
}
