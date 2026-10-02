#include <stdio.h>
#include <string.h>

 
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
 
    
        char S[1001],T[1001];
        scanf("%s %s",S,T);

        printf("%lu %lu\n",strlen(S),strlen(T));

        printf("%s %s",S,T);

    return 0;
}
        