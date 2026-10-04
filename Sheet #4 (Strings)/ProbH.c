#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t>0){
        char S[100000];
        scanf("%s",S);
        int x = strlen(S);
        bool f = false;

        for(int i=0;i<x-2;i++){
            if((S[i]=='0' && S[i+1]=='1' && S[i+2]=='0') || (S[i]=='1' && S[i+1]=='0' && S[i+2]=='1')){
                   f=true;
                   break;
           } 
           
              
        }
        if(f==true){
            printf("Good\n");
        }else{
            printf("Bad\n");
        }
        
        t--;
    }
}