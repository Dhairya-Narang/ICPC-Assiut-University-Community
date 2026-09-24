// S

# include <stdio.h>

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

		int x,b,temp,z;
		int res = 0;
		scanf("%d\n",&x);
		for(int i = 1;i<=x;i++){
			res =0;
			scanf("%d %d\n",&z,&b);
			if(z>b){
				temp = z;
				z = b;
				b = temp;
			}
			for(int n = z+1;n<b;n++){
				if(n%2!=0){
					res += n;
				}

				}
		printf("%d\n",res);
		}


}
