#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char S[100001];
    scanf("%1000000s",S);
    int length = strlen(S);
    for(int i=0;i<length;i++){
        if(S[i]==','){
            printf(" ");
        }else if(isupper(S[i])){
            printf("%c",tolower(S[i]));
        }else{
            printf("%c",toupper(S[i]));
        }
    }
}