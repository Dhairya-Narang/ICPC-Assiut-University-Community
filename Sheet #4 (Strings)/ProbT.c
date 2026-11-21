#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    char S[100005];
    scanf("%s",S);
    int i=0;
    bool f=true;
    printf("username: ");
    for(;i<strlen(S);i++){
        if(S[i]=='='){
            f=false;
        }else if(f==false){
            if(S[i]=='&') break;
            printf("%c",S[i]);
        }
    }
    printf("\npwd: ");
    f=true;
    for(;i<strlen(S);i++){
        if(S[i]=='='){
            f=false;
        }else if(f==false){
            if(S[i]=='&') break;
            printf("%c",S[i]);
        }
    }
    printf("\nprofile: ");
    f=true;
    for(;i<strlen(S);i++){
        if(S[i]=='='){
            f=false;
        }else if(f==false){
            if(S[i]=='&') break;
            printf("%c",S[i]);
        }
    }
    printf("\nrole: ");
    f=true;
    for(;i<strlen(S);i++){
        if(S[i]=='='){
            f=false;
        }else if(f==false){
            if(S[i]=='&') break;
            printf("%c",S[i]);
        }
    }
    printf("\nkey: ");
    f=true;
    for(;i<strlen(S);i++){
        if(S[i]=='='){
            f=false;
        }else if(f==false){
            if(S[i]=='&') break;
            printf("%c",S[i]);
        }
    }

    return 0;
}