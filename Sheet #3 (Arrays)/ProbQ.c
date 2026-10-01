#include <stdio.h>
#include <stdbool.h>



 
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
 
    int T;
    scanf("%d",&T);
    bool f=true;


    while(T>0){
        int N;
        scanf("%d",&N);

        int array[N];

        for(int i=0;i<N;i++){
            scanf("%d",&array[i]);
        }

        int count=0;

        for(int z=0;z<N;z++){
            for(int j=z;j<N;j++){
                bool f = true;

                for(int k=z+1;k<=j;k++){
                    
                    if(array[k-1]>array[k]){
                        f=false;
                        break;
                        
                    }
                }

                if(f==true){
                    count++;
                }

            }
        }

        printf("%d\n",count);

        T--;
    }


    


    return 0;
}