#include <stdio.h>
#include <math.h>

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int x;
    scanf("%d",&x);
    int i=x;
    while(i>0){
        for(int y=1;y<=x;y++){
            if(i==y && i==x-x/2){
                printf("X");
            }else if(i==y){
                printf("/");
            }else if(i+y==x+1){
                printf("\\");
            }else{
                printf("*");
            }
            
        }
        printf("\n");
        i--;
    }


    return 0;
}
