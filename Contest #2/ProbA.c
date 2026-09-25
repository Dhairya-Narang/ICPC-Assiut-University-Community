 
 # include <stdio.h>
 
 
int main(){
 
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
 
		long long S,K;
		scanf("%lld %lld",&K,&S);
		if(K-S>=0){
			printf("%d\n",K-S);
		}else{
			printf("0");
		}
		return 0;
		
	}
	
