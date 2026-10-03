#include <stdio.h>

int compare(const void *a, const void *b) {
    int arg1 = *(const int *)a;
    int arg2 = *(const int *)b;

    if (arg1 < arg2) return -1;
    if (arg1 > arg2) return 1;
    return 0;
}

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    long long array[n];
    long long sum = 0;

    for(int i=0;i<n;i++){
        scanf("%lld",&array[i]);
    }
    if(n>k){
        qsort(array, n, sizeof(long long), compare);
        for(int i=0;i<k;i++){
            if(array[n-1-i]>0)sum += array[n-1-i];
        }
    }else{
        for(int i=0;i<n;i++){
            if(array[i]>0)sum += array[i];
        }
    }
    printf("%lld",sum);
    return 0;
}