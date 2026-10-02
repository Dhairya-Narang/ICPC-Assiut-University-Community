#include <stdio.h>
#include <string.h>

int main(){

    char A[11],B[11],C[21];
    scanf("%s %s",A,B);
    strcpy(C,A);
    printf("%lu %lu\n%s \n",strlen(A),strlen(B),strcat(C,B));
    char temp = A[0];
    A[0] = B[0];
    B[0] = temp;
    printf("%s %s",A,B);

    
    return 0;
}