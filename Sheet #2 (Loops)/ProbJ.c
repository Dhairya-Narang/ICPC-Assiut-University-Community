# include <stdio.h>
# include <stdbool.h>

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
		
	int x;
	scanf("%d",&x);
	for(int i = 2;i<=x;i++){
		int num = i;
		bool f = false;
		for(int y = 2;y<num;y++){
			if(num%y == 0){
				f = true;
				break;
			}
		}
		if(f == false){
			printf("%d ",i);
		}
	}
	

}	
