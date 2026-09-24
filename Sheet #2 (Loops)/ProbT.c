# include <stdio.h>
 
 
int main(){
 
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
 
		int x;
		int a = -1;
		scanf("%d",&x);
		for(int i=x;i>=1;i--){
			int num = i;
			a = a+2;
			for(int y=2;y<=num;y++){
				printf(" ");
			}
			for(int z=1;z<2*a;z=z+2){
				printf("*");
			}
			printf("\n");
		}
	}
