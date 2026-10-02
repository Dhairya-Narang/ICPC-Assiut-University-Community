#include <stdio.h>

 
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
 
    
        int n;
        scanf("%d",&n);
        int count=0; 
        int count_=0;
      
            for(int i=1;i<=n;i++){
                int a;
                scanf("%d",&a);

                if(i%2==0){
                    if(a>0){
                        count++;
                    }
                }else{
                    if(a<0){
                        count++;
                    }
                }

                if(i%2==0){
                    if(a<0){
                        count_++;
                    }
                }else{
                    if(a>0){
                        count_++;
                    }
                }

            }

           

           

            if(count_>count){
                printf("%d\n",count);
            }else{
                    printf("%d\n",count_);
            }
       
       
    return 0;
}
        