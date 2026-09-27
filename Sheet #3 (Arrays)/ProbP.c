#include <stdio.h>

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

            int n;
            scanf("%d\n",&n);
            int min = 1000000,max=-1000000;
            int A_array[n];
            for(int i=0;i<n;i++){
                scanf("%d",&A_array[i]);
            }
            int count = 0;
            while(1){
                for(int i=0;i<n;i++){
                    if (A_array[i]%2!=0){
                        printf("%d\n",count);
                        return 0;
                    }
                    A_array[i]/=2;
                }
                count++;
            }

         
    
    return 0;
}
