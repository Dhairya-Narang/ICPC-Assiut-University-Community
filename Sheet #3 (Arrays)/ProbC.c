#include <stdio.h>

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

        int n;
        scanf("%d",&n);
        long long A_array[n];
        for(int i=0;i<n;i++){
            scanf("%lld",&A_array[i]);
        }
        int input;
        scanf("%d",&input);
        for(int i=0;i<n;i++){
            if(A_array[i]>0){
                printf("1 ");
            }else if(A_array[i]<0){
                printf("2 ");
            }else{
                printf("0 ");
            }
        }


    
    return 0;
}
