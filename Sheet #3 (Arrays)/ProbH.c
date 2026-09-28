#include <stdio.h>
#include <stdbool.h>

 
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
 
    int x,temp;
    scanf("%d",&x);
    int A_array[x];
    for(int i=0;i<x;i++){
        scanf("%d",&A_array[i]);
    }
    for(int j=0;j<x;j++){
        bool swap = false;
        for(int y=0;y<x-1-j;y++){
            if(A_array[y]>A_array[y+1]){
                temp = A_array[y];
                A_array[y] = A_array[y+1];
                A_array[y+1]=temp;
                swap = true;
            }

        }


        if(swap == false){
            break;
        }
    }
    for(int i=0;i<x;i++){
        printf("%d ",A_array[i]);
    }

 
    return 0;
}
