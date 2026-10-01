#include <stdio.h>

 
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
 
    long long N;
    int M;
    scanf("%lld %d",&N,&M);
    long long Array[N];

    for(long long i=0;i<N;i++){
            
            scanf("%lld",&Array[i]);
    }
    for(long long i=0;i<N-1;i++){
            
            Array[i+1] = Array[i]+Array[i+1];
    }

    for(int i=0;i<M;i++){
        
        long long L,R;
        scanf("%lld %lld",&L,&R);
        if(L==1){
        printf("%lld\n",Array[R-1]);
        }else{
            printf("%lld\n",Array[R-1]-Array[L-2]);
        }
        
    }

    
    
    return 0;
}