# include <stdio.h>

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

		char x;
		int y;
		scanf("%c\n",&x);
		scanf("%d",&y);
		for(int i=1;i<=y;i++){
			int num = i;
			scanf("%d ",&num);
			for(int z=1;z<=num;z++){
				printf("%c", x);
			}
			printf("\n");
		}

	}		



