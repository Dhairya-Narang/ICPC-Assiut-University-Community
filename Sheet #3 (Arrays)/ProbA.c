#include <stdio.h>
 
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
 
    int n;
    scanf("%d",&n);
    long long A_array[n];
    long long result=0;
    for(int i=0;i<n;i++){
        scanf("%lld",&A_array[i]);
        result += A_array[i];
    }
    if(result<0){
       result= -result;
    } 
    printf("%lld\n",result);
    return 0;
}
