//简单选择排序
// void selectSort(){
//     for(int i=1;i<=n;i++){
//         int k=i;
//         for(int j=i;j<=n;j++)
//         { 
//             if(A[j]<A[k])
//                 k=j;
//         }  
//         int temp=A[i];
//         A[i]=A[k];
//         A[k]=temp;
//     }
// }
//直接插入排序,假设A[]是从1开始编号的
// 
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
struct Student {
    char id[15];
    int score;
    int location_number;//考场号
    int local_rank;//考场内排名
}stu[30010];
bool cmp(Student a,Student b){
    if(a.score!=b.score)
        return a.score>b.score;
    else
        return strcmp(a.id,b.id)<0;
}
int main(){
    int n,k,num=0;//num为总考生数，n为考场数,k为考场内的人数
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&k);
        for(int j=0;j<k;j++){
            scanf("%s %d",&stu[num].id,&stu[num].score);
            stu[num].location_number=i;
            num++;
        }
        sort(stu+num-k,stu+num,cmp);//notice
        stu[num-k].local_rank=1;//排名设为1
        for(int j=num-k+1;j<num;j++){
            if(stu[j].score==stu[j-1].score){
                stu[j].local_rank=stu[j-1].local_rank;
            }else{
                stu[j].local_rank=j+1-(num-k);//notice
            }
        } 
        printf("%d\n",num);
        sort(stu,stu+num,cmp);
        int r=1;
        for(int i=0;i<num;i++){
            if(i>0&&stu[i].score!=stu[i-1].score)
            r=i+1;
        }
        printf("%s",stu[i].id);
        printf("%d %d %d\n",r,stu[i].location_number,stu[i].local_rank);
    }
    return 0;
}

