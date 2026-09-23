# include <stdio.h>
 
int main(){
 
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
 
		int x , y, temp;
		scanf("%d %d",&x,&y);
		for(int i = 1;x>=i;i++){
			if(x%i==0 && y%i==0){
				temp = i;
				
			}
		}
		printf("%d\n",temp );
 
}
