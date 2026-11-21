#include <stdio.h>
#include <string.h>

int main(){
    char S[101];
    scanf("%s",S);
    if(strlen(S)%2!=0){
        if(S[strlen(S)/2]=='?'){
            S[strlen(S)/2]='a';
        }
    }
    for(int i=0;i<strlen(S)/2;i++){
        if(S[i]=='?'){
            if(S[strlen(S)-1-i]=='?'){
                S[strlen(S)-1-i]='a';
                S[i]='a';
            }else{
                S[i]=S[strlen(S)-1-i];
            }
        }else if(S[strlen(S)-1-i]=='?'){
            S[strlen(S)-1-i]=S[i];
        }else{
            if(S[strlen(S)-1-i]!=S[i]){
                printf("-1");
                return 0;
            }
        }
    }
    printf("%s",S);
    return 0;
}