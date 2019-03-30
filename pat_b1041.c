#include<stdio.h>
const int maxn=1010;
struct Student
{
    long long id;
    int zuoweihao;//kaoshizuowei
}testSeat[maxn];

int main(){
    int num,seat,zuoweihao;//shijizuowei
    long long id;
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        scanf("%lld %d %d",&id,&seat,&zuoweihao);
        testSeat[seat].id=id;//这个想法比较有特点
        testSeat[seat].zuoweihao=zuoweihao;

    }
    int m;//chaxungeshu
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        scanf("%d",&seat);
        printf("%lld %d\n",testSeat[seat].id,testSeat[seat].zuoweihao);
    }
    return 0;
}
