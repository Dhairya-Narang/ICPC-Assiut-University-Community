#include <stdio.h>
#include <stdbool.h>



 
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
 
    int A,B;
    scanf("%d %d",&A,&B);
    bool f=true;

    for(int i=0;i<A;i++){
        int n;
        if(scanf("%1d",&n)!=1){
           f=false;
           break; 
        }
    }
    char ch;
    if(scanf("%1c",&ch)!=1){
        f=false;

    }

    if(ch!='-'){
        f=false;

    }

    for(int i=0;i<B;i++){
        int z;
        if(scanf("%1d",&z)!=1){
            f=false;
            break; 
        }
    }

    if(f==true){
        printf("Yes");
    }else{
        printf("No");
    }

    return 0;
}