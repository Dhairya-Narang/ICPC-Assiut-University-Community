 
 # include <stdio.h>
 
 
int main(){
 
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
 
		int S,K;
		scanf("%d %d",&K,&S);
		int count = 0;
		for(int X=0;X<=K;X++){
			for(int Y=0;Y<=K;Y++){
				int Z= S-Y-X;
				if(Z>=0 && Z<=K){
					count++;
				}
			}
		}
		printf("%d\n",count);
		return 0;
		
		
	}
	
