# include <stdio.h>
 
int main(){
 
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
 		
 		
		int b,temp,z;
		int res = 0;
		for(;;){
			if(scanf("%d %d\n",&z,&b)==2){
				res =0;
				
				if(z<=0 || b<=0){
					break;
				}else{
					if(z>b){
					temp = z;
					z = b;
					b = temp;
					}
					for(int n = z;n<=b;n++){
						res += n;
						printf("%d ",n);
					}
					printf("sum =%d\n",res);
				}
			}else{
				break;
			}
		}
		
		return 0;
 
 
}

