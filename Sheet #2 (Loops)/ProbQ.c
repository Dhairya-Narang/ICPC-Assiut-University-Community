# include <stdio.h>

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

		int x;
		scanf("%d",&x);
		for(int i=1;i<=x;i++){
			int num;
			scanf("%d\n",&num);
			if(num != 0){
				for(int y=num;num>0;num/=10){
					int z = num%10;
					printf("%d ",z );
				}
			}else{printf("0 ");}
			printf("\n");
			
			
		}
	}		



