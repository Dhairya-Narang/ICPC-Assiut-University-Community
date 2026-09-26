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
            temp = A_array[i];
            A_array[i]=A_array[n-i-1];
            A_array[n-i-1]=temp;
        }
        for(int i=0;i<n;i++){

            printf("%d ",A_array[i]);
        }


    
    return 0;
}
