#include <stdio.h>

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int x,temp=0;
	scanf("%d",&x);
    while(x>0){
    	int count=0;
    	long long input;
    	scanf("%lld ",&input);
    	for(long long i=input;i>0;i/=2){
    		if(i%2!=0){
    			break;
    		}
    		count++;
		}
		if(temp<count){
			temp=count;
		}
    	x--;
    }

    printf("%d\n",temp);

    return 0;
}
