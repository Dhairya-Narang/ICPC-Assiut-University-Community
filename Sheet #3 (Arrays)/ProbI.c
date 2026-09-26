#include <stdio.h>

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

        int x;
        scanf("%d\n",&x);

        while(x>0){
            int n;
            long long temp = 4e18;
            scanf("%d\n",&n);
            
            int A_array[n];
            for(int i=0;i<n;i++){
                scanf("%d",&A_array[i]);
                // printf("%d\n",A_array[i]);

            }
            for(int i=1;i<n;i++){
                for(int j=i+1;j<n+1;j++){
                    long long result= A_array[i-1]+A_array[j-1]-i+j;
                    if (result<temp){
                        temp=result;
                    }
                }
            }
            printf("%lld\n",temp );
            x--;
        }






    
    return 0;
}
