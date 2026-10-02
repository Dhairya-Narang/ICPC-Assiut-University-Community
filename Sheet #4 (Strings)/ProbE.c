#include <stdio.h>

int main(){
    char S[1000000];
    scanf("%s",S);
    int res = 0;

    for(int i=0;S[i] != '\0';i++){
        res += S[i]-'0';
    }
    printf("%d",res);

}