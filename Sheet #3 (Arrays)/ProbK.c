#include <stdio.h>

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

            int n;
            scanf("%d\n",&n);
            int result = 0;
            int A_array[n];
            for(int i=0;i<n;i++){
                scanf("%1d",&A_array[i]);
                
                result += A_array[i];
            }
            printf("%d",result);
          
    
    return 0;
}
