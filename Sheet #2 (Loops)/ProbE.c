#include <stdio.h>

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
		
	int x, max = 0;
    scanf("%d\n",&x);
    int i=x;
    while(i>=1){
    	int n;
    	scanf("%d ",&n);
    	if(n>=max){
    		max=n;
    	}
    	i=i-1;
    }
    printf("%d\n",max );
   
   	return 0;
}		
