#include <stdio.h>
#include <string.h>

int main(){
    char S[100005];
    char traget[100]="hello";
    int n=0;
    scanf("%s",S);
    for(int i=0;i<strlen(S);i++){
        if(S[i]==traget[n]){
            n++;
        }
    }
    if(n==5){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}