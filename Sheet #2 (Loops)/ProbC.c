#include <stdio.h>
int main(){
    int x;
    scanf("%d\n",&x);
    int even=0 , odd=0 ,postive=0, negative=0;
    for(int i =1 ; i<=x ;i++){
        int i;
        scanf("%d ",&i);
        if(i%2==0){
            even = even + 1;
        }else{odd = odd + 1;}
        if(i>0){
            postive++;
        }else if(i<0){
            negative++;
        }else{
            
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d",even,odd,postive,negative);
}
