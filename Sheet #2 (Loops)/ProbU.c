
 # include <stdio.h>
 
 
int main(){
 
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
 
		int a,b,c;
		int res =0;
		scanf("%d %d %d",&a,&b,&c);
		for(int i=1;i<=a;i++){
			int num = i;
			int sum = 0;
			for(;num>0;num=num/10){
				sum = sum + num%10;
			}

			for(int y=b;y<=c;y++){
				
				if(sum==y){
					res+=i;
					break;
				}
			}
		}
		printf("%d\n",res);
		return 0;
	}
