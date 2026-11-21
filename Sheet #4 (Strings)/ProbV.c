#include <stdio.h>
#include <string.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main(){
    char S[10000002];
    scanf("%s",S);
    for(int i=0;i<strlen(S);i++){
        if(S[i]=='E' && S[i+1]=='G' && S[i+2]=='Y' && S[i+3]=='P' && S[i+4]=='T'){
            printf(" ");
            i+=4;
        }else{
            printf("%c",S[i]);
        }
    }
    return 0;
}