// S

# include <stdio.h>

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

		int x,y;
		
		scanf("%d %d",&x,&y);
		if(x%y==0){
			for(int i=x/y;i>0;i--){
				long long count=1000000000;
				for(int z=1;z<=y;z++){
					int input;
					scanf("%d",&input);
					if(input<=count){
						count = input;
					}
				}
				printf("%lld ",count);
			}
		}else{
			for(int i=x/y;i>=0;i--){
				long long count=1000000000;
				for(int z=1;z<=y;z++){
					int input;
					scanf("%d",&input);
					if(input<=count){
						count = input;
					}
				}
				printf("%lld ",count);
			}
		}

}
