#include<stdio.h>
int main(){
    int a[1010]={0};
    int e,k;//k为系数，e为指数
    int count=0;//是为了合理的输出空格
    while(scanf("%d %d",&e,&k)!=EOF){
        a[e]=k;//指数为e的系数是k
    }
    a[0]=0;//0求导的系数为0
    for(int i=1;i<=1000;i++){//不能写成i=0;i<1010;i++
        a[i-1]=i*a[i];//不能写成：a[i]=i*a[i];i--;
        a[i]=0;
        if(a[i-1]!=0)
            count++;
    }
    if(count==0)
        printf("0 0");
    else{
        for(int i=1000;i>=0;i--){
            if(a[i]!=0){
                printf("%d %d",a[i],i);
                count--;
                if(count!=0)
                    printf(" ");
            }
        } 
    }
    return 0;
}