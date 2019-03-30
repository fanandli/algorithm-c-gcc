#include<stdio.h>
struct pNode
{
    char id[20];
    int hh,mm,ss;
}temp,ans1,ans2;

bool great(pNode a1,pNode a2){
    if(a1.hh!=a2.hh)    return(a1.hh<a2.hh);
    if(a1.mm!=a2.mm)    return(a1.mm<a2.mm);
    if(a1.ss!=a2.ss)    return(a1.ss<a2.ss);
}

int main(){
    int n;
    scanf("%d",&n);
    ans1.hh=24,ans1.mm=60,ans1.ss=60;
    ans2.hh=0,ans2.mm=0,ans2.ss=0;
    for(int i=0;i<n;i++){
        scanf("%s %d:%d:%d",temp.id,&temp.hh,&temp.mm,&temp.ss);
        if(great(temp,ans1)==true)  ans1=temp;
        scanf("%d:%d:%d",&temp.hh,&temp.mm,&temp.ss);
        if(great(temp,ans1)==false)  ans2=temp;
    }
    printf("%s %s\n",ans1.id,ans2.id);
    return 0;

}
//与pat_b1028的思路类似
