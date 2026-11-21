#include <stdio.h>
#include <string.h>
#include <stdbool.h>
 
int main(){
    char S[10005];
    scanf("%s",S);
    int count=0;
    int left_count=0;
    int right_count=0;
    int arr[10000]={0};
    for(int i=0;i<strlen(S);i++){
        if(S[i]=='L'){
            left_count++;
        }else{
            right_count++;
        }
        if(left_count==right_count){
            left_count=0;
            right_count=0;
            arr[count] = i;
            count++;
        }
    }
    printf("%d\n",count);
    int n = 0;
    for(int i=0;i<strlen(S);i++){
        if(arr[n]!=i){
            printf("%c",S[i]);
        }else{
            printf("%c\n",S[i]);
            n++;
        }
    }
    return 0;
}