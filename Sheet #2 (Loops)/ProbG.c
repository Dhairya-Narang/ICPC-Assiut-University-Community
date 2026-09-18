
#include <stdio.h>

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
   
      int x;
     scanf("%d\n",&x);
     for(int i=1 ; i<=x;i++){
     	int num;
     	scanf("%d",&num);
     	long long ans =1;
     	for(int y=1;y<=num;y++){
     		ans = y*ans;
     	}
      printf("%lld\n",ans);
     }
     



}
