#include <stdio.h>

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

            int i;
            scanf("%d",&i);
            int j=i;
            int A_array[i][j];
            for(int y=0;y<i;y++){
                for(int z=0;z<j;z++){
                    scanf("%d",&A_array[y][z]);
                }
            }
            int x,result1=0,result2=0;
            scanf("%d",&x);
            for(int y=0;y<i;y++){
                for(int z=0;z<j;z++){
                    if(z==y){
                        result1 += A_array[y][z];
                    }
                    if(i-1-y==z){
                        result2 += A_array[y][z];
                    }
                }
            }
            if(result1-result2>0){
                printf("%d\n",result1-result2 );
            }else{
                printf("%d\n",-result1+result2 );
            }

    return 0;
}
