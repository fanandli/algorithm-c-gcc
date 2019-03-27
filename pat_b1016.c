#include<stdio.h>
int main(){
    long long da,db;
    long long pa,pb,sum;
    long long paa=0,pbb=0;
    scanf("%lld%lld%lld%lld",&da,&pa,&db,&pb);
    while(da!=0){
        if(da%10==pa) paa=paa*10+pa;
        da=da/10;
    }
    while(db!=0){
        if(db%10==pb) pbb=pbb*10+pb;//notice
        db=db/10;
    }
    sum=paa+pbb;
    printf("%lld",sum);
    return 0;
    
    
}