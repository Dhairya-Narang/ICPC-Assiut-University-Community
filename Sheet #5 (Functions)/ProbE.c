#include <stdio.h>

void Swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int X,Y;
    scanf("%d %d",&X,&Y);
    Swap(&X,&Y);
    printf("%d %d",X,Y);
    return 0;
}