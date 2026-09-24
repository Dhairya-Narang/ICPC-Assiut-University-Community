
 # include <stdio.h>
 
 
int main(){
 
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
 
		int x;
		scanf("%d",&x);
		for(int i=1;i<=x*4;i++){
			if(i%4==0){
				printf("PUM\n");
			}else{
				printf("%d ",i);
			}
		}
		return 0;
	}
