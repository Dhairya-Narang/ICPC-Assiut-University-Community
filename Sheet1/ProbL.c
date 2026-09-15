#include <stdio.h>
int main(){
    char a[100],b[100],c[100],d[100];
    scanf("%s %s\n %s %s",&a,&b,&c,&d);
    if (strcmp(b,d)==0){
        printf("ARE Brothers");
    }else{
        printf("NOT");
    }
    
}
