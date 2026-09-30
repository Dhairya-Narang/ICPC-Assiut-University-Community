#include <stdio.h>

 
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
 
    int x;
    scanf("%d",&x);
    int R_array[x];
    int y=0;

    

    while(y<x){
        int input;
        scanf("%d",&input);
        R_array[y] = input;
        y++;
    }


    for(int i=0;i<x;i++){

        if(R_array[i] == 0){

            int temp1=0,temp2= i-1;
            while(temp1<temp2){
                int temp3 = R_array[temp1];
                R_array[temp1] = R_array[temp2];
                R_array[temp2] = temp3;
                temp1++;
                temp2--;
            }
        }
    }


    for(int i=0;i<x;i++){
        printf("%d ",R_array[i]);
    }
   

 
    return 0;
}
