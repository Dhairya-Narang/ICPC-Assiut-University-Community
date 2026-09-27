#include <stdio.h>

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

            int i,j;
            scanf("%d %d\n",&i,&j);
            int A_array[i][j];
            for(int y=0;y<i;y++){
                for(int z=0;z<j;z++){
                    scanf("%d",&A_array[y][z]);
                }
            }
            int x;
            scanf("%d",&x);
            for(int y=0;y<i;y++){
                for(int z=0;z<j;z++){

                    if(A_array[y][z]==x){
                        printf("will not take number");
                        return 0;
                    }
                }
            }
            printf("will take number");
            

    return 0;
}
