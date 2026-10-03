#include <stdio.h>
#include <string.h>

int main(){
    int N;
    scanf("%d",&N);

    while(N>0){
        char T[51],S[51];
        scanf("%s %s",S,T);
        int s = strlen(S);
        int t = strlen(T);
        
        if(s>t){
            for(int i=0;i<t*2;i++){
                if(i%2==0){
                    printf("%c",S[i/2]);
                }else{
                    printf("%c",T[i/2]);
                }
            }

            for(int i=t;i<s;i++){
                printf("%c",S[i]);
            }
        }else{
            for(int i=0;i<s*2;i++){
                if(i%2==0){
                    printf("%c",S[i/2]);
                }else{
                    printf("%c",T[i/2]);
                }
            }

            for(int i=s;i<t;i++){
                printf("%c",T[i]);
            }
        }
        printf("\n");

        N--;
    }
}