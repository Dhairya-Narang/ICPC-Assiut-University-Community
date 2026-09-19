# include <stdio.h>

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
		
	int x;
	scanf("%d",&x);
	for(int i = 2;i<x;i++){
		if(x%i==0){
			printf("NO");
			return 0;
		}
	}
	printf("YES");

}		
