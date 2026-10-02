#include <stdio.h>
#include <string.h>

 
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
 
    
        char s;
        while(scanf("%c",&s)==1){
            if(s=='\\' || s=='\n'){
                break;
            }
            printf("%c",s);
        }
    return 0;
}
        