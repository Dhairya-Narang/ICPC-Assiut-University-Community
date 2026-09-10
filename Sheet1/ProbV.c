#include <stdio.h>
int main()
{
    int a,b;
    char S;
    scanf("%d %c %d",&a ,&S, &b);
    if ( S == '>'){
        if (a > b){
            printf("Right");
        }
        else {
            printf("Wrong");
        }
    }
    if ( S == '<'){
        if (a < b){
            printf("Right");
        }
        else {
            printf("Wrong");
        }
    }
    if ( S == '='){
        if (a == b){
            printf("Right");
        }
        else {
            printf("Wrong");
        }
    }
}
