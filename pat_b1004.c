#include<stdio.h>
struct Student
{
    char name[11];
    char id[11];
    int score;
}temp,ans_max,ans_min;

int main(){
    ans_max.score=-1;
    ans_min.score=101;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s%s%d",temp.name,temp.id,&temp.score);
        if(temp.score>ans_max.score)//不存储全部的输入，只用temp暂存，然后都和ans_max和ans_min对比
            ans_max=temp;
        if(temp.score<ans_min.score)
            ans_min=temp;

    }
    printf("%s %s\n",ans_max.name,ans_max.id);
    printf("%s %s\n",ans_min.name,ans_min.id);
    return 0;

}