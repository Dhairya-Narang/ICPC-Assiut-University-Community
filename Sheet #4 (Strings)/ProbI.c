#include <stdio.h>
#include <string.h>

int main(){
    char S[1001];
    scanf("%s",S);
    int x = strlen(S);
    for (int i = 0; i < x; i++){
      if(S[i]!=S[x-1-i]){
        printf("NO");
        return 0;
      }  
    }
    printf("YES");
    return 0;
    
} 