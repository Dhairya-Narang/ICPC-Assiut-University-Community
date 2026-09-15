#include <stdio.h>
#include <stdbool.h>
int main(){
    bool x = false ;
    for(int i = 0;;i++){
        scanf("%d\n",&i);
        if(i==1999){
            printf("Correct");
            break;
        }else{
            printf("Wrong\n");
        }
    }

    
}
