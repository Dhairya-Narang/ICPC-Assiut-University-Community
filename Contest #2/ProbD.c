 
 # include <stdio.h>
 
 
int main(){
 
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
 
		long long x;
		scanf("%lld",&x);
		for(int i=1;i<=x;i++){
			long long input1,input2;
			scanf("%lld %lld",&input1,&input2);

			if(input1>input2){
				int temp = input1;
				input1 = input2;
				input2 = temp;
			}
			
			long long res1 = (input1*(input1-1))/2;
			long long res2 = (input2*(input2+1))/2;
			printf("%lld\n",res2-res1);
			}
					
		return 0;
		
	}
	
