#include <stdio.h>
int main(){
    long long eyes, mouth, body;
    scanf("%lld %lld %lld",&eyes,&mouth,&body);
    long long min;
    if (eyes<=mouth && eyes<=body){
         min = eyes;}
    else if (mouth<=eyes && mouth<=body){
         min = mouth;}
    else { min=body; }
    long long eyes2 = eyes - min;
    long long mouth2 = mouth - min;
    long long body2 = body - min;
    if(eyes2==0){
        printf("%lld",min);
    }else if(mouth2==0){
        long long eyes_needed = eyes2 / 2;
        long long ans = (eyes_needed < body2) ? eyes_needed : body2;
        printf("%lld",ans+min);
    }else{
        printf("%lld",min);
    }
}
