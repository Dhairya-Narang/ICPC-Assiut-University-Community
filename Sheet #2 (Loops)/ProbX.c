 
 # include <stdio.h>
 
 
int main(){
 
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
 
		int x;
		
		scanf("%d",&x);
		for(int i=1;i<=x;i++){
			int input,count=0,decimal=0;
			scanf("%d",&input);
			while(input>0){
				if(input%2!=0){
					count++;
				}
				input/=2;
			}
			int base=1;
			for(int n=1;n<=count;n++){
				decimal += base;
				base*=2;
			}

			printf("%d\n",decimal);
			
		}
		
		
	}
	
