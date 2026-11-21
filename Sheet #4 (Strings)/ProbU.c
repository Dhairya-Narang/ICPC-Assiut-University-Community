#include <stdio.h>
#include <string.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main(){
    char S[10000002];
    scanf("%s",S);
    int arr[5]={0};
    for(int i=0;i<strlen(S);i++){
        if(S[i]=='e' || S[i]=='E'){
            arr[0]++;
        }else if(S[i]=='g' || S[i]=='G'){
            arr[1]++;
        }else if(S[i]=='y' || S[i]=='Y'){
            arr[2]++;
        }else if(S[i]=='p' || S[i]=='P'){
            arr[3]++;
        }else if(S[i]=='t' || S[i]=='T'){
            arr[4]++;
        }
    }
    qsort(arr,5,sizeof(int),compare);
    printf("%d",arr[0]);
    return 0;
}