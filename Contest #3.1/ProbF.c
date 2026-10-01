#include <stdio.h>

 
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
 
    int n;
    scanf("%d",&n);
    int array[n];

    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    for(int i=0;i<n/2;i++){
        printf("%d ",array[i]);
        printf("%d ",array[n-1-i]);
    }

    if(n%2!=0){
        printf("%d ",array[n/2]);
    }
    return 0;
}