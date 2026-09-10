#include <stdio.h>
int main()
{
    int a,b,c;
    char x , y;
    scanf("%d %c %d %c %d",&a ,&x, &b, &y, &c);
    if ( x == '+'){
        if ((a + b) == c){
            printf("Yes");
        }
        else {
            int add = ((a+b));{
                printf("%d",add);
            }
        }
    }
    if ( x == '-'){
        if ((a - b) == c){
            printf("Yes");
        }
        else {
            int sub = ((a-b));{
                printf("%d",sub);
            }
        }
    }
    if ( x == '*'){
        if ((a * b) == c){
            printf("Yes");
        }
        else {
            long long multiply = ((a*b));{
                printf("%lld",multiply);
            }
        }
    }
}
