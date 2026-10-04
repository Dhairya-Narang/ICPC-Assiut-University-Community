#include <stdio.h>
#include <string.h>

int main(){
    char S[1000001];
    int first = 1;

    while(scanf("%s",S)==1){
        for(int i=0;i<strlen(S)/2;i++){
            char temp = S[strlen(S)-i-1];
            S[strlen(S)-i-1] = S[i];
            S[i] = temp;
        } 
        if(first==0){
            printf(" ");
        }
        printf("%s",S); 
        first = 0;
    }
   
    return 0;
}