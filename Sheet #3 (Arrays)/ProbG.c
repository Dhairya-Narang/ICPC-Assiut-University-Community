#include <stdio.h>

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

        int n,temp;
        scanf("%d",&n);
        int A_array[n];
        int low_no=100000;
        for(int i=0;i<n;i++){
            scanf("%d",&A_array[i]);
            
        }
       
        for(int i=0;i<n/2;i++){
           
            if(A_array[i]!=A_array[n-i-1]){
                printf("NO");
                return 0;
            }

        }


            printf("YES");



    
    return 0;
}
