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
                if(A_array[i]<min){
                    min=A_array[i];
                }
                if(A_array[i]>max){
                    max =A_array[i];
                }
                
            }

            for(int i=0;i<n;i++){
                if(min==A_array[i]){
                    A_array[i]=max;
                }else if(max==A_array[i]){
                    A_array[i]=min;
                }
            }
            for(int i=0;i<n;i++){
                 printf("%d ",A_array[i]);
            }

         
    
    return 0;
}
