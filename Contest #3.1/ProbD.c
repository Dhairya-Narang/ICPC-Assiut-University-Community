#include <stdio.h>

 
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
 
    
        int n;
        scanf("%d",&n);
        int array[n];
        int count=0; 

        for(int i=0;i<n;i++){
            scanf("%d",&array[i]);
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(array[j]==array[i]+1){
                    count++;
                    break;
                }
            }
        }

        printf("%d\n",count);
       
    return 0;
}
        