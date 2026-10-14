#include <stdio.h>

int compare(const void *a,const void *b){
    return(*(int*)a - *(int*)b);
}

int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    qsort(arr, N , sizeof(int), compare);
    printf("%d %d",arr[0],arr[N-1]);
    return 0;


}