#include <stdio.h>
#include <stdlib.h>
 
int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
 
 
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
 
    qsort(Array, N,sizeof(long long),compare);
    for(long long i=0;i<M;i++){
            
        long long Q;
        scanf("%lld",&Q);
 
 
        int *result = bsearch(&Q,Array,N,sizeof(long long),compare);
 
        if(result != NULL){
            printf("found\n");
        }else{
            printf("not found\n");
        }
 
    }
 
    
 
    
    
    return 0;
}