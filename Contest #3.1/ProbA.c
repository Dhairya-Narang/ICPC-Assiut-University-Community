// A. Square or rectangle


# include <stdio.h>
# include <stdbool.h>

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

		int T;
		scanf("%d",&T);

		while(T>0){
			int w,h;
			scanf("%d %d",&w,&h);
			if(w == h){
				printf("Square\n");
			}else{
				printf("Rectangle\n");
			}

			
			T--;
		}
}
