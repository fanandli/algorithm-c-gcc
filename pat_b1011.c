#include<stdio.h>
int main(){
    int T,tcase=1;
    scanf("%d",&T);
    while(T--){//notice
        long long a,b,c;
        scanf("%lld%lld%lld",&a,&b,&c);
        if(a+b>c){
            printf("case #%d:true\n",tcase++);
        }
        else{
            printf("Case #%d:false\n",tcase++);
        }
    }
    return 0;
}