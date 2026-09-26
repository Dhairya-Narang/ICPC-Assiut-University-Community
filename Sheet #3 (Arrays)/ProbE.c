#include <stdio.h>

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

        int n;
        scanf("%d",&n);
        int A_array[n];
        int low_no=100000;
        for(int i=0;i<n;i++){
            scanf("%d",&A_array[i]);
            if(low_no>A_array[i]){
                low_no=A_array[i];
            }

        }
        int input;
        scanf("%d",&input);
        for(int i=0;i<n;i++){
            if(A_array[i]==low_no){
                printf("%d %d",A_array[i],i+1);
                break;
            }
        }


    
    return 0;
}
