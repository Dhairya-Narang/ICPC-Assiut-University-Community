#include <stdio.h>

float average(int n,double arr[]){
    double sum=0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    return sum/n;
}

int main(){
    int n;
    scanf("%d",&n);
    double arr[n];
    for(int i=0;i<n;i++){
        scanf("%lf",&arr[i]);
    }
    printf("%.6f",average(n,arr));
    return 0;
}