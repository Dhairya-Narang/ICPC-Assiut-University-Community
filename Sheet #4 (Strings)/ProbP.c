#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int main(){
    int S;
    int count = 0;
    bool f = true;

    while((S = getchar()) != EOF){
        if(isalpha((char)S)){
            if(f==true){
                 count++;
                 f = false;
            }
        }else{
            f = true;
        }
    }
    printf("%d",count);
   
    return 0;
}