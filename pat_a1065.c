#include<stdio.h>
int main(){
    long long a,b,c;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%lld%lld%lld",&a,&b,&c);
        if(a+b>c){
            printf("case#%d:false",i);
        }else{
            printf("case#%d:true",i);
        }
    }
    
    return 0;
}
//有待改进