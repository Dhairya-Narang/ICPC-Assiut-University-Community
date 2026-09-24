
# include <stdio.h>


int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

		int x;
		scanf("%d",&x);
		for(int i=x;i>=1;i--){
			int num = i;
			for(int y=1;y<=num;y++){
				printf("*");
			}
			printf("\n");
		}
	}		



