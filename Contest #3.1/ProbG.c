#include <stdio.h>

 
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
 
    int t;
    scanf("%d",&t);

    while(t>0){
        int n;
        scanf("%d",&n);
        int count_even=0,count_odd=0;

            for(int i=1;i<=n;i++){
                int a;
                scanf("%d",&a);

                if(a%2==0){
                    count_even++;
                }

            }
            if(n%2!=0){
                printf("-1\n");
            }
            else if(count_even - n/2>=0){
                printf("%d\n",count_even - n/2);
            }else{
                printf("%d\n",-count_even + n/2);

            }
        

        t--;
    }
    return 0;
}
        