#include<stdio.h>
struct Person
{
    char name[10];
    int yy,mm,dd;
}oldest,youngest,left,right,temp;
//最年长，最年轻，出生期限左，出生期限右，临时存放

//这种比较方法需要注意一下,不止一种这样的比较方法
bool LessEqu(Person a,Person b){
    if(a.yy!=b.yy)  return a.yy<=b.yy;//true
    else if(a.mm!=b.mm) return a.mm<=b.mm;//true
    else    return a.dd<=b.dd;//true
}

int MoreEqu(Person a,Person b){
    if(a.yy!=b.yy)  return a.yy>=b.yy;//true
    else if(a.mm!=b.mm) return a.mm>=b.mm;//true
    else    return a.dd>=b.dd;//true
}

void init(){//初始化
    oldest.yy=right.yy=2014;
    youngest.yy=left.yy=1814;
    youngest.mm=oldest.dd=left.mm=right.mm=9;
    youngest.dd=oldest.dd=left.dd=right.dd=6;
}


int main(){
    init();
    int n,num;//num容易忽略
    scanf("%d",&n);//输入的个数
    for(int i=0;i<n;i++){
        scanf("%s %d%d%d",temp.name,&temp.yy,&temp.mm,&temp.dd);
        if(LessEqu(temp,right)&&MoreEqu(temp,left)){
            num++;
            if(LessEqu(temp,oldest))    oldest=temp;
            if(MoreEqu(temp,youngest))  youngest=temp;
        }  
    }
    if(num==0)  printf("0\n");//如果输入的所有日期都不是合法的，那么就需要输出0
    else printf("%d %s %s\n",num,oldest.name,youngest.name);
    return 0;

}

int main(){





}
