#include<stdio.h>
const int maxn=10010; 

int main(){
    int school[maxn]={0};
    int num;
    int id;
    int score;
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        scanf("%d %d",&id,&score);
        school[id]+=score;
    }
    int max=-1;
    int k;
    for(int i=1;i<=num;i++){   
        if(school[i]>max){
            max=school[i];
            k=i;
        }
    }

    printf("%d %d",k,max);
    return 0;

}
