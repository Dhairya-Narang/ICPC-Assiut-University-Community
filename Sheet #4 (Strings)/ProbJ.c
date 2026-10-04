#include <stdio.h>
 
int main(){
    char S;
 
    int freq[26]={0};
    while(scanf("%c",&S)!=EOF){
        freq[S-'a']++;
    }
    for(int i=0;i<26;i++){
        if(freq[i]!=0){
            printf("%c : %d\n",i+'a',freq[i]);
        }
    }
    return 0;
}