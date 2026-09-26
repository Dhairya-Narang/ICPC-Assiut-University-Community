#include <stdio.h>

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

            int n;
            scanf("%d\n",&n);
            long long temp=4e18;
            int A_array[n];
            for(int i=0;i<n;i++){
                scanf("%d",&A_array[i]);
                if(A_array[i]<temp){
                    temp=A_array[i];
                }

            }
            int count;
            for(int i=0;i<n;i++){
                if(temp==A_array[i]){
                    count++;
                }
            }

            if(count%2==0){
                printf("Unlucky");
            }else{
            printf("Lucky");
            }
            





    
    return 0;
}
