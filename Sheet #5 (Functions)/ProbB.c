#include <stdio.h>
 
void print(int a){
    for(int i=1;i<=a;i++){
        printf("%d",i);
        if(i!=a){
            printf(" ");
        }
    }
}
 
int main(){
    int a;
    scanf("%d",&a);
    print(a);
    return 0;
}