// L. Max Subarray
# include <stdio.h>

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

		int T;
		scanf("%d",&T);

		while(T>0){
			int N;
			scanf("%d",&N);
			int N_array[N];

			for(int i=0;i<N;i++){
				scanf("%d",&N_array[i]);
			}

			for(int i=0;i<N;i++){
				int temp = -100000;

				for(int j=i;j<N;j++){
					for(int k = i; k <= j; k++){

						if(temp<N_array[k]){
							temp=N_array[k];
						}
					}
					printf("%d ",temp );
				}

				
			}
			printf("\n");
			T--;
		}

}
