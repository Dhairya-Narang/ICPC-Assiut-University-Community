#include <stdio.h>
#include <string.h>


int main(){
    int n;
    scanf("%d",&n);
    char key[] = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    char Orignial[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    char S[1000002];
    scanf("%s",S);
    if(n==1){
        for(int i=0;i<strlen(S);i++){
            for(int j=0;j<strlen(Orignial);j++){
                if(S[i]==Orignial[j]){
                    printf("%c",key[j]);
                    break;
                }
            }
        }
    }else{
        for(int i=0;i<strlen(S);i++){
            for(int j=0;j<strlen(key);j++){
                if(S[i]==key[j]){
                    printf("%c",Orignial[j]);
                    break;
                }
            }
        }
    }
    return 0;
}