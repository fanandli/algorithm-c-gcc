#include<stdio.h>
// #include<cstdio>
const int maxn=10010;

int main(){
    int school[maxn]={0};
    int n,schoolId,score;
    scanf("%d",&n);//输入学校的个数
    for(int i=0;i<n;i++){
        scanf("%d%d",&schoolId,&score);
        school[schoolId]+=score;//将学校与分数对应起来
    }
    int k=1;
    int Max=-1;
    for(int i=1;i<=n;i++){
        if(school[i]>Max){
            Max=school[i];
            k=i;
        }  
    }
    printf("%d %d\n",k,Max);
    return 0;


}