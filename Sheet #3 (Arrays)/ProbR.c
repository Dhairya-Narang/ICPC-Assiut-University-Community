#include <stdio.h>

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

            int n;
            scanf("%d\n",&n);
            int A_array[n];
            for(int i=0;i<n;i++){
                scanf("%d",&A_array[i]);
            }
            int B_array[n];
            for(int i=0;i<n;i++){
                scanf("%d",&B_array[i]);
            }

            int used[n];              
            for(int i=0;i<n;i++){     
                used[i] = 0;           
            }  
           
            for(int i=0;i<n;i++){
                for(int y=0;y<n;y++){
                    if(used[y]==0 && A_array[i]==B_array[y]){
                        A_array[i]= -A_array[i];
                        used[y]=1;
                        break;
                    }
                }
                
            }
             for(int i=0;i<n;i++){
                if(A_array[i]>=0){
                    printf("no");
                    return 0;
                }
            }
            printf("yes");


         
    
    return 0;
}
