# include <stdio.h>

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

		int x;
		scanf("%d",&x);
		long long fab[x];
		fab[0]=0,fab[1]=1;
		for(int i = 2;i<x;i++){
			fab[i]=fab[i-1]+fab[i-2];
		}
		printf("%lld",fab[x-1]);

}
