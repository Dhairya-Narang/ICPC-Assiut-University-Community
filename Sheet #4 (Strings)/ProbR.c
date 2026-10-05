#include <stdio.h>
 
int main(){
    int n;
    scanf("%d",&n);
    char S[20000006];
    int score = 0; 
    scanf("%s",S);
    for(int i=0;i<n;i++){
        if(S[i]=='V'){
            score += 5;
        }else if(S[i]=='W'){
            score += 2;
        }else if(S[i]=='Y'){
            if(i+1<n){
                S[n]=S[i+1];
                S[n+1] = '\0';          
                n++;
                i++;
            }
            
        }else if(S[i]=='X'){
            if(i+1<n){
            i++;
            }
        }else if(S[i]=='Z'){
            if(i+1<n){
                if(S[i+1]=='V'){
                    score /= 5;
                    i++;
                }else if(S[i+1]=='W'){
                    score /= 2;
                    i++;
                }
            }
        }
    }
    printf("%d",score);
    
}
