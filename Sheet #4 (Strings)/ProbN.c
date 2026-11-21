#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    char S[n+5];
    scanf("%s",S);
    int count=1;
    for(int i=0;i<n-1;i++){
        if(S[i]!=S[i+1]){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}