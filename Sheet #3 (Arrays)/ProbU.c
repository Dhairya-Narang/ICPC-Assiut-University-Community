#include <stdio.h>
#include <stdbool.h>



 
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
 
    int N,M;
    scanf("%d %d",&N,&M);
    long long A_array[N];
    long long B_array[M];

    for(int i=0;i<N;i++){
        scanf("%lld",&A_array[i]);
    }

    for(int q=0;q<M;q++){
        scanf("%lld",&B_array[q]);
    }

    int j=0;
    for(int z=0;z<M;z++){
        bool f=true;
        for(int x=j;x<N;x++){
            if(A_array[x]==B_array[z]){
                f=false;
                j=x+1;
                break;
            }
        }
        if(f==true){
            printf("NO");
            return 0;
        }
    }
    printf("YES");

    


    return 0;
}