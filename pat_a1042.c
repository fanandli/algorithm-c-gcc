#include<stdio.h>
const int N=54;
int main(){
    int start[N+1];
    int end[N+1];
    int next[N+1];
    char mp[5]={'s','h','c','d','j'};
    int x;//移动的次数
    scanf("%d",&x);
    for(int i=1;i<=N;i++){
        start[i]=i;
    }//初始化牌的位置
    for(int i=1;i<=N;i++){
        scanf("%d",&next[i]);//输入部分
    }
    for(int i=0;i<x;i++){
        for(int i=1;i<=N;i++){
            end[next[i]]=start[i];
        }
        for(int i=1;i<=N;i++){
            start[i]=end[i];
        }
    }
    for(int i=1;i<=N;i++){
        if(i!=1)
            printf(" ");
        start[i]--;
        printf("%c%d",mp[start[i]/13],start[i]%13+1);
    }
    return 0;
}