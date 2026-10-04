#include <stdio.h>
#include <stdbool.h>

int main(){
    char X[21],Y[21];
    bool f = true;
    scanf("%s %s",X,Y);
    for(int i=0;i<20;i++){
        if(X[i]>Y[i]){
            printf("%s",Y);
            f=false;
            break;
        }else if(X[i]<Y[i]){
            printf("%s",X);
            f=false;
            break;
        }
    }
    if(f==true)printf("%s",Y);
    return 0;
}