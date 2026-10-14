#include <stdio.h>

void N_Times(int a,char b){
    while(a>0){
        printf("%c ",b);
        a--;
    }
    printf("\n");
}

int main(){
    int T;
    scanf("%d",&T);
    while (T>0){
        int N;
        char C;
        scanf("%d %c",&N,&C);
        N_Times(N,C);
        T--;
    }
    return 0;
    
}