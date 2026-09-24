# include <stdio.h>
# include <stdbool.h>
 
int main(){
 
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
 
		int x , y ;
		int res = 0;
		bool f= true;
		bool z = true;
		scanf("%d %d",&x,&y);
		for(int i=x;i<=y;i++){
			int num = i;
			f = true;
			for(int y=num;y>0;y/=10){
				
		        if(y%10!=4 && y%10!=7){
		        	f = false;
                     break;
		        }
 
    	  }
	    	if(f == true){
	    		printf("%d ",i );
	    		z = false;
	    	}
		}
		if (z == true){
			printf("-1");
		}
 
 
	
 
}
