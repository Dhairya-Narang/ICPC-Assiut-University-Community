#include <stdio.h>
 
 
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
 
    int x;
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        int n;
        long long s;
        scanf("%d %lld",&n,&s);
        long long sum = 1ll*n*(n+1)/2;
        if(sum<s){
            printf("-1");
        }else if(sum > s){
            for(int y=n;y>=1;y--){
                if(s>=y){
                    printf("%d ",y);
                    s -= y;
                }
            }
        }else{
            for(int z=1;z<=n;z++){
                printf("%d",z);
            }
        }
        printf("\n");
    }            
 
    return 0;
}
